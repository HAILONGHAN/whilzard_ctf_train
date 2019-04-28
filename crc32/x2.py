#from libnum import *

def comp(n):
    i=0
    crc=0xedb88320
    m = 0xa09dd84b
    h =0
    while i < 33 :
        if ((2**i)&m)==((2**i)&h):
            h = (crc<<i)^h
            i = i + 1
        else:
            # m = (crc<<i)^m
            # h = (2**i)|h
            i = i + 1

    print(hex(h))
    return h


def violentcrack():
    for i in range(2**33):
        m = comp(i)
        m = m ^ 0xa09dd84b
        if m&0xFFFFFFFF==0:
            print(hex(m))
            break


def main():
    violentcrack()

main()


# c1 = "*ctf"
# print(s2b(c1))
# c1_ = s2n(c1)
# c2 = "zwX4G1C8MgE0QK{yDwI5VEOtgb33nywt"
# c2_ = 0x4C11DB7
# m = c1_^c2_
# print(s2b(n2s(c2_)))
# c3 = 0x04505985
# m2 = c3^m
# print(s2b(n2s(0xa09dd84b)))
# print(hex(m))
# #c1 = "BR08l4n0Pzxit9D}sZQSbCUxJaHjCFB4"
# #c1_ = s2n(c1)
# #c2 = "Gz{2A0p{MBOsS9E8y}DxQTIOfmLgTPG0"
# #c2_ = s2n(c2)
# #m = c1_^c2_
# #print(s2b(n2s(m)))
