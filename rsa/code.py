#!/usr/bin/python
# -*- coding: utf-8 -*-
__Author__ = "L1B0@10.0.0.55"

from libnum import n2s,s2n
import gmpy2

p=6224751407196587

q=7943494850559647

e=65537

N=49446280749080005222860298324789

cipher=18445170944028011076605277003494

m = (p-1)*(q-1)

d = gmpy2.invert(e,m)

flag = n2s(pow(cipher,d,N))
print flag