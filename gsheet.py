import glob
import pprint
import struct
import numpy as np
import os
import json

def readByte(f):
    return int.from_bytes(f.read(1), 'little')

def readShort(f):
    return int.from_bytes(f.read(2), 'little')

def readInt(f):
    return int.from_bytes(f.read(4), 'little')

def readLong(f):
    return int.from_bytes(f.read(8), 'little')

def getPointedToStr(f, offset):
    current_pos = f.tell()
    f.seek(offset)
    s = b''
    c = f.read(1)
    while c != b'\x00':
        s += c
        c = f.read(1)
    f.seek(current_pos)
    return s.decode('ascii')

def readPointedToStr(f):
    offset = readLong(f)
    return getPointedToStr(f, offset)

def readStructDefinition(f, field_count):
    fields = []
    for _ in range(field_count):
        field = {}
        field['name'] = readPointedToStr(f)
        field['typename'] = readPointedToStr(f)
        field['typeid'] = readByte(f)
        field['typeflags1'] = readByte(f)
        field['typeflags2'] = readShort(f)
        field['offset'] = readShort(f)
        field['directsize'] = readShort(f)
        field['elemsize'] = readShort(f)
        if not field['typeflags2'] & 0x0003: # not pointer or array
            assert field['directsize'] == field['elemsize']
        substruct_field_count = readShort(f)
        assert readInt(f) == 0
        substruct_definition_ptr = readLong(f)
        if substruct_definition_ptr != 0:
            assert substruct_field_count > 0
            current_pos = f.tell()
            f.seek(substruct_definition_ptr)
            field['subfields'] = readStructDefinition(f, substruct_field_count)
            f.seek(current_pos)
        else:
            assert substruct_field_count == 0
        assert readInt(f) == 0xDEADBEEF
        assert readInt(f) == 0xDEADBEEF
        fields.append(field)
    return fields

def deserializeField(filedata, offset, fielddef):
    #print('deserializeField', fielddef, hex(offset))
    if fielddef['typeid'] == 0: # struct
        value = deserializeStruct(filedata, offset, fielddef['subfields'])
    elif fielddef['typeid'] == 1: # bool
        assert fielddef['elemsize'] == 1
        value = [False, True][filedata[offset]]
    elif fielddef['typeid'] == 2: # int
        assert fielddef['elemsize'] == 4
        value = int.from_bytes(filedata[offset:offset+4], 'little')
    elif fielddef['typeid'] == 3: # float
        assert fielddef['elemsize'] == 4
        float32value, = np.frombuffer(filedata[offset:offset+4], dtype=np.float32)
        value = float(str(float32value))
    elif fielddef['typeid'] == 4: # string
        assert fielddef['elemsize'] == 16
        strptr, length = struct.unpack('<QQ', filedata[offset:offset+16])
        if strptr == 0:
            value = None
        else:
            value = filedata[strptr:strptr+length].decode('ascii')
    elif fielddef['typeid'] == 5: # bytes
        assert fielddef['elemsize'] == 16
        bytesptr, length = struct.unpack('<QQ', filedata[offset:offset+16])
        assert bytesptr != 0
        value = list(filedata[bytesptr:bytesptr+length])
    else:
        raise Exception("Don't know how to deal with %s %s"%(fielddef, filedata[offset:offset+fielddef['size1']]))
    return value

def deserializeArray(filedata, offset, fielddef):
    #print('deserializeArray', fielddef, hex(offset))
    assert fielddef['directsize'] == 16
    arrayptr, arraycount = struct.unpack('<QQ', filedata[offset:offset+16])
    assert arrayptr != 0
    value = []
    for i in range(arraycount):
        value.append(deserializeField(filedata, arrayptr+i*fielddef['elemsize'], fielddef))
    return value

def deserializePointer(filedata, offset, fielddef):
    #print('deserializePointer', fielddef, hex(offset))
    assert fielddef['directsize'] == 8
    ptr, = struct.unpack('<Q', filedata[offset:offset+8])
    if ptr == 0:
        return None
    else:
        return deserializeField(filedata, ptr, fielddef)

def deserializeStruct(filedata, offset, fielddefs):
    #print('deserializeStruct', fielddefs, hex(offset))
    structdata = {}
    for fielddef in fielddefs:
        if fielddef['typeflags2'] & 0x0001 and fielddef['typeid'] != 4: # pointer that isn't string
            assert not fielddef['typeflags2'] & 0x0002
            value = deserializePointer(filedata, offset+fielddef['offset'], fielddef)
        elif fielddef['typeflags2'] & 0x0002: # array
            assert not fielddef['typeflags2'] & 0x0001
            value = deserializeArray(filedata, offset+fielddef['offset'], fielddef)
        else:
            value = deserializeField(filedata, offset+fielddef['offset'], fielddef)
        structdata[fielddef['name']] = value
    return structdata

for fname in glob.glob("gsheet_bin/**/*.gsheet", recursive=True):
    print(fname)
    data = {}
    f = open(fname,'rb')
    assert f.read(8) == b'gsht\x02\x00\x00\x00'
    data['unk1'] = readInt(f)
    data['unk2'] = list(f.read(4))
    data['sheetname'] = readPointedToStr(f)
    toplevel_field_count = readInt(f)
    total_field_count = readInt(f)
    rowptr = readLong(f)
    rowcount = readInt(f)
    bytes_per_row = readInt(f)
    data['fields'] = readStructDefinition(f, toplevel_field_count)
    f.seek(0)
    filedata = f.read()
    f.close()
    data['rows'] = []
    for i in range(rowcount):
        data['rows'].append(deserializeStruct(filedata, rowptr+i*bytes_per_row, data['fields']))

    fname2 = fname.replace("gsheet_bin","gsheet_json").replace(".gsheet",".json")
    assert fname2 != fname
    try:
        os.makedirs(fname2.rsplit(os.sep,1)[0])
    except OSError as e:
        pass
    f2 = open(fname2, 'w')
    json.dump(data, f2, indent='\t')
    f2.close()
    #pprint.pprint(data, sort_dicts=False, width=200)
