from pwn import *

p = process("./babyformat")
gdb.attach(p)
#input()
#p.recvuntil('==== Baby Format - Echo system ====')
#payload = "%6$p"
#p.send(payload)

p.interactive()

