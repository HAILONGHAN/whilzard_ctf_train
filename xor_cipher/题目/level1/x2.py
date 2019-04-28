from libnum import *
import base64


def main():
    file = open('known.txt','r')
    for i in range(99):
        l = file.readline()
        c1 = l[0]
        c2 = l[0+37]
        c1_ = s2n(c1)
        c2_ = s2n(c2)
        m = c1_^c2_
        print(str(n2b(c1_))+":"+str(n2b(c2_))+":"+str(n2b(m)))
    file.close()


if __name__ == "__main__":
    main()