from libnum import *

import base64

ci_1 = "Gz{2A0p{MBOsS9E8y}DxQTIOfmLgTPG0"
ci1 = "zwX4G1C8MgE0QK{yDwI5VEOtgb33nywt"
pl_1 ="BR08l4n0Pzxit9D}sZQSbCUxJaHjCFB4"
ci2 = s2b(ci1)
ci_2 = s2b(ci_1)

# print ci2
pl1 = "RL{2B6r}PjD4bW0sQLU5pDxKjh77msLK"
pl2 = s2b(pl1)
pl_2 = s2b(pl_1)
m = ""
for i in range(0, len(pl2)):
	if pl2[i] == ci2[i]:
		m=m+'0'
	else:
		m=m+ '1'
print m
m_=""
for i in range(0, len(pl_2)):
        if pl_2[i] == ci_2[i]:
                m_=m_+'0'
        else:
                m_=m_+ '1'
print m_
