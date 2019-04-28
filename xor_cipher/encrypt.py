from secret import flag, key

ct = ''
for ch in flag:
    ct += chr(ord(ch)^key)
print ct.encode('hex')
