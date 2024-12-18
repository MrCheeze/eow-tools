import glob
import struct
import math
import pprint
from numpy import float32
import binascii
import zlib
import re
import os
import json

def roundUp(x):
    return (x+0x10)//0x10*0x10

def assertZero(xs):
    for x in xs:
        assert x == 0

sectionSpecs = [
    {'name':'actors','itemsize':0x7C,'endalignment':True,'fields':'<fffhhfffffffffhhhhhhhhhhhhhhhhihbbIhhhhhhhhhhhhbbh'},
    {'name':'empty1','itemsize':-1,'endalignment':True},
    {'name':'unk2','itemsize':4,'endalignment':True,'fields':'<I'},
    {'name':'unk3','itemsize':2,'endalignment':True,'fields':'<h'},
    {'name':'actorFieldValues','itemsize':0x18,'endalignment':True,'fields':'<hh4sIiii'},
    {'name':'unk5','itemsize':0xC,'endalignment':True},
    {'name':'unk6','itemsize':2,'endalignment':True},
    {'name':'unk7','itemsize':0x30,'endalignment':True,'fields':'<ffffffffhhhhhhhh'},
    {'name':'unk8','itemsize':0x30,'endalignment':True,'fields':'<ffffffffhhhhhhhh'},
    {'name':'unk9','itemsize':4,'endalignment':True},
    {'name':'unk10','itemsize':8,'endalignment':True,'fields':'<hhi'},
    {'name':'unk11','itemsize':4,'endalignment':True},
    {'name':'unk12','itemsize':0x30,'endalignment':True,'fields':'<ffffffffffhhhh'},
    {'name':'unk13','itemsize':0xC,'endalignment':True},
    {'name':'unk14','itemsize':0x30,'endalignment':True},
    {'name':'unk15','itemsize':0x20,'endalignment':True},
    {'name':'unk16','itemsize':8,'endalignment':True},
    {'name':'unk17','itemsize':2,'endalignment':True},
    {'name':'unk18','itemsize':8,'endalignment':True},
    {'name':'unk19','itemsize':0x20,'endalignment':True,'fields':'<fffhhfffhh'},
    {'name':'unk20','itemsize':8,'endalignment':True,'fields':'<ff'},
    {'name':'unk21','itemsize':4,'endalignment':True},
    {'name':'unk22','itemsize':8,'endalignment':True,'fields':'<ff'},
    {'name':'empty23','itemsize':-1,'endalignment':True},
    {'name':'unk24','itemsize':0x10,'endalignment':True,'fields':'<ffff'},
    {'name':'unk25','itemsize':0x10,'endalignment':False,'fields':'<ffff'},
    {'name':'actorParams','itemsize':8,'endalignment':False,'fields':'<i4s'},
    {'name':'floatValues','itemsize':4,'endalignment':False,'fields':'<f'},
    {'name':'empty28','itemsize':-1,'endalignment':False},
    {'name':'stringValues','itemsize':2,'endalignment':False,'fields':'<h'},
    {'name':'stringOffsets','itemsize':4,'endalignment':True,'fields':'<i'},
    {'name':'strings','itemsize':None,'endalignment':True},
]

hashes = {}

for line in open('ActorProfile_1.0.1-2.txt'):
    for word in line.strip().split():
        hashes[binascii.crc32(word.encode('ascii'))] = word

for line in open('strings_exefs.txt'):
    line = line.rstrip()
    hashes[binascii.crc32(line.encode('ascii'))] = line

for fname in glob.glob("level/**/*.elo", recursive=True):
    print(fname)
    f = open(fname,'rb')
    data = f.read()
    f.close()
    assert data[:8] == b'elo \x01\x00\x01\x01'
    assert struct.unpack('<I', data[8:0xC]) == (len(data),)
    headers = []
    for i in range(32):
        count, start = struct.unpack('<II', data[0xC+8*i:0xC+8*(i+1)])
        headers.append({'count':count,'start':start})
    assert data[0x10C:0x120] == b'LVLE\x0b\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00'

    assert headers[0]['count'] == headers[3]['count']
    assert headers[2]['count'] == headers[10]['count']
    assert headers[30]['count'] == headers[31]['count']

    #for i in range(32):
    #    print(headers[i], sectionSpecs[i])

    assert headers[17]['count'] == 0
    headers[17]['count'] = headers[16]['count'] # weird thing

    output = {}

    for i in range(32):
        if i == 31: # string section
            items = []
            offset = headers[i]['start']
            for _ in range(headers[i]['count']):
                #assert (offset-headers[i]['start']) in output[30]
                s = []
                while data[offset] != 0:
                    s.append(data[offset])
                    offset += 1
                offset += 1
                items.append(bytes(s).decode('ascii'))
            headers[i]['end'] = offset
        else:
            if sectionSpecs[i]['itemsize'] == -1: # 1, 23, 28 never have any data
                assert headers[i]['count'] == 0
            headers[i]['end'] = headers[i]['start'] + headers[i]['count']*sectionSpecs[i]['itemsize']
            items = []
            for j in range(headers[i]['count']):
                items.append(data[headers[i]['start'] + j*sectionSpecs[i]['itemsize']:headers[i]['start'] + (j+1)*sectionSpecs[i]['itemsize']])
                if sectionSpecs[i].get('fields'):
                    items[-1] = list(struct.unpack(sectionSpecs[i]['fields'], items[-1]))
                    for k in range(len(items[-1])):
                        if type(items[-1][k]) == float:
                            items[-1][k] = float(str(float32(items[-1][k])))
                    if len(items[-1]) == 1:
                        items[-1] = items[-1][0]
                else:
                    items[-1] = " ".join(["%02X"%x for x in items[-1]])
        if sectionSpecs[i]['endalignment']:
            headers[i]['paddedEnd'] = roundUp(headers[i]['end'])
        else:
            headers[i]['paddedEnd'] = headers[i]['end']
        assertZero(data[headers[i]['end']:headers[i]['paddedEnd']])
        if i == 31:
            assert headers[i]['paddedEnd'] == len(data)
        else:
            assert headers[i]['paddedEnd'] == headers[i+1]['start']
        output[i] = items

    for i,item in enumerate(output[26]):
        assert item[0] <= 4
        if item[0] == 0: # null
            assert item[1] == b'\x00\x00\x00\x00'
            output[26][i] = None
        elif item[0] == 1: # bool
            output[26][i] = [False, True][struct.unpack('<i', item[1])[0]]
        elif item[0] == 2: # int
            output[26][i] = struct.unpack('<i', item[1])[0]
        elif item[0] == 3: # float
            output[26][i] = float(str(float32(struct.unpack('<f', item[1])[0])))
        elif item[0] == 4: # string
            output[26][i] = output[31][struct.unpack('<i', item[1])[0]]
        
    for i,item in enumerate(output[2]):
        output[2][i] = hashes[item]
        
    for i,item in enumerate(output[29]):
        output[29][i] = output[31][item]
        
    for i,item in enumerate(output[4]):
        if item[0] == 1: # bool
            item[2] = [False, True][struct.unpack('<i', item[2])[0]]
            assert item[1] == 0
        elif item[0] == 2: # int
            item[2] = struct.unpack('<i', item[2])[0]
            assert item[1] == 0
        elif item[0] == 3: # float
            item[2] = struct.unpack('<f', item[2])[0]
            assert item[1] == 0
        elif item[0] == 4: # string
            item[2] = output[31][struct.unpack('<i', item[2])[0]]
            assert item[1] == 0
        elif item[0] == 6:
            item[2] = struct.unpack('<i', item[2])[0]
            item[2] = output[27][item[2]:item[2]+item[1]]
            assert item[1] > 0
        elif item[0] == 7:
            item[2] = struct.unpack('<i', item[2])[0]
            item[2] = output[29][item[2]:item[2]+item[1]]
            assert item[1] > 0
        else:
            print(item)
            1/0
        if item[-4] in hashes:
            item[-4] = hashes[item[-4]]
        assert item[-1] == item[-2] == item[-3] == 0
            
    for i,item in enumerate(output[0]):
        item[34] = hashes[item[34]]
        params = []
        for j in range(8):
            params.append(output[26][item[22+j]])
        while len(params) > 0 and params[-1] is None:
            params.pop()
        conditions = []
        for j in range(0,8,2):
            assert item[14+j+1] <= 4
            conditions.append((output[26][item[14+j]], item[14+j+1]))
        while len(conditions) > 0 and conditions[-1] == (None, 4):
            conditions.pop()
        fieldValues = {}
        for j in range(item[37],item[37]+item[38]):
            fieldValues[output[4][j][3]] = output[4][j][2]
        output[0][i] = [item[:3]] + item[3:8] + [item[8:14]] + [conditions] + [params] + item[30:37] + [fieldValues] + item[39:] # group the params

    fname2 = fname.replace("level"+os.sep,"level_json"+os.sep).replace(".elo",".json")
    assert fname2 != fname
    try:
        os.makedirs(fname2.rsplit(os.sep,1)[0])
    except OSError as e:
        pass
    
    #pprint.pprint(output, width=400, sort_dicts=False)
    f2 = open(fname2, 'w')
    f2.write('{\n')
    for i in range(32):
        f2.write('\t"%s": [\n'%sectionSpecs[i]['name'])
        for j,item in enumerate(output[i]):
            f2.write('\t\t')
            json.dump(item, f2)
            if j == len(output[i]) - 1:
                f2.write('\n')
            else:
                f2.write(',\n')
        if i == 31:
            f2.write("\t]\n}\n")
        else:
            f2.write("\t],\n")
    f2.close()
