from secret import plaintext, key

alphabet = 'abcdefghijklmnopqrstuvwxyz'
pt = filter(lambda x:alphabet.find(x)!=-1, plaintext)
ct = ''
for i in range(len(pt)):
    a = alphabet.find(pt[i])
    b = alphabet.find(key[i%len(key)])
    c = (a+b)%len(alphabet)
    ct += alphabet[c]
print ct

