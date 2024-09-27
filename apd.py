import struct
import glob

def readInt(f):
    return int.from_bytes(f.read(4), 'little')

def getStr(buf, offset):
    if offset == -1:
        return None
    s = []
    while buf[offset] != 0:
        s.append(buf[offset])
        offset += 1
    return bytes(s).decode('ascii')
    

for fname in glob.glob('ActorProfile*.apd'):
    file = open(fname,'rb')

    header = file.read(12)

    unk1 = file.read(4*header[5])

    actorlistbuf_size = readInt(file)
    actorlistbuf = file.read(actorlistbuf_size)

    strbuf_size = readInt(file)
    strbuf = file.read(strbuf_size)

    rest = file.read()
    file.close()

    f2 = open(fname[:-4]+".txt",'w')

    for offset in range(0,actorlistbuf_size,0x10):
        a,b,index,strOffset,e,shunOffset = struct.unpack('<BBhiii', actorlistbuf[offset:offset+0x10])
        f2.write('%02X %02X %4d %-40s %5d %6d\n'%(a,b,index,getStr(strbuf,strOffset),e,shunOffset))
        #f2.write('%s\n'%getStr(strbuf,strOffset))
    f2.close()
