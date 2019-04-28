from secret import flag, step

ct = ''
cur = 0
for i in range(len(flag)):
    ct += flag[cur]
    cur = (cur+step)%len(flag)
print ct
