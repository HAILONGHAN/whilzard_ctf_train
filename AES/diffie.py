from Crypto.Cipher import AES
from random import randint
from flag import flag

def tostr(x):
    return hex(x)[2:34].decode('hex')

n = 197750519609166016276224846395143434847L
g = 3
sk1 = randint(0,n-1)
sk2 = randint(0,n-1)
a = pow(g, sk1, n)
b = pow(g, sk2, n)
print 'a:',a
print 'b:',b
assert pow(a,sk2,n)==pow(b,sk1,n)
key = tostr(pow(a,sk2,n))
assert len(key)==16
c = AES.new(key)
print c.encrypt(flag.ljust(16,'\x00')).encode('hex')
'''
a: 78195867571917667867403091574897775338
b: 183147323165966634444496784550521860616
20817f7d2ebc08e0357af6c637c222c2
'''
