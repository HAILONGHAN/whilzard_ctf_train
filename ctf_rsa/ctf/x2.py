from libnum import *
import base64


def main():
    file = open('known.txt','r')
    for i in range(99):
        l = file.readline()
	#n=base64.b64encode(l[0:31])
	#m=base64.b64encode(l[33:64])
        #print(l[65])
	#print(n)
	#print(m)
        c1 = l[0]
        c2 = l[0+33]
	#c1 = n[0]
        #c2 = m[0]
        c1_ = s2n(c1)
        c2_ = s2n(c2)
        m = c1_^c2_
	print(str(s2b(n2s(c1_)))+":"+str(s2b(n2s(c2_)))+":"+str(s2b(n2s(m))))
        print(str(hex(c1_))+":"+str(hex(c2_))+":"+str(hex(m)))
    file.close()


if __name__ == "__main__":
    main()