import os

keyword = 'abcdefghjklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_-+=[]{}|;:"\',../<>?!@#$%^&*()~`'
flag = 'g{'
process = 'juckcode.exe'
enc = 'FFIuB@tvrrHHrFuBD@qqqHH@'
finish = 0
temp_match = 0

def calc_match(str1,str2):
    ret_match = 0
    if len(str1) < len(str2):
        for i in range(len(str1)):
            if str1[:i] == str2[:i]:
                ret_match = i
            else:
                break
    else:
        for i in range(len(str2)):
            if str1[:i] == str2[:i]:
                ret_match = i
            else:
                break
    return  ret_match

while True:
    for word in keyword:
        fp = open('flag', 'w')
        fp.write(word)
        fp.close()

        p = os.popen(process)
        r = p.read().replace('\r', '').replace('\n', '')
        p.close()
        print(word+" "+r)
        if enc == r:
            finish = 1
            flag += word
            break
        new_match = calc_match(enc,r)
        if temp_match == 0:
            temp_match = new_match
            add = word
            continue

        if temp_match <= new_match:
            temp_match = new_match
            add = word
            continue
        if finish == 1:
            break
        flag += add
    print(flag)