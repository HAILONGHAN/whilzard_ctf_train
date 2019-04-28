from zlib import crc32
from struct import pack

with open('flag.txt') as f:
    s = f.read().strip()
res = ''
assert len(s)%4==0
for i in range(0,len(s),4):
    res += pack('I',crc32(s[i:i+4])&0xffffffff)
print res.encode('hex')
print crc32('*ctf')
# a09dd84b
85595004
c9dedbd0
7f4b1b53
1756ea0a
aa7a28fc
d6a68adc
0cb256fb
4d5f1320

04505985
d0dbdec9
531b4b7f
0aea5617
fc287aaa
dc8aa6d6
fb56b20c
20135f4d

*ctf{you_know_it_is_encode_anyway..}