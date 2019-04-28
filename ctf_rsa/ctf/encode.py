from zlib import crc32
from struct import pack

with open('flag.txt') as f:
    s = f.read().strip()
res = ''
assert len(s)%4==0
for i in range(0,len(s),4):
    res += pack('I',crc32(s[i:i+4])&0xffffffff)
print res.encode('hex')
print hex(crc32('*ctf'))
# a09dd84b 85595004 c9dedbd0 7f4b1b531756ea0aaa7a28fcd6a68adc0cb256fb4d5f1320
