from libnum import *
import base64

c1 = "*ctf"
print(s2b(c1))
c1_ = s2n(c1)
c2 = "zwX4G1C8MgE0QK{yDwI5VEOtgb33nywt"
c2_ = 0x4C11DB7
m = c1_^c2_
print(s2b(n2s(c2_)))
c3 = 0x04505985
m2 = c3^m
print(s2b(n2s(0xa09dd84b)))
print(hex(m))
#c1 = "BR08l4n0Pzxit9D}sZQSbCUxJaHjCFB4"
#c1_ = s2n(c1)
#c2 = "Gz{2A0p{MBOsS9E8y}DxQTIOfmLgTPG0"
#c2_ = s2n(c2)
#m = c1_^c2_
#print(s2b(n2s(m)))
