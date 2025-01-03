# 카이사르 암호

plain = list(input())
code = []

for i in plain:
    if 68 <= ord(i) <= 100:
        code.append(chr(ord(i) - 3))
    else:
        code.append(chr(ord(i) + 23))

for i in code:
    print(i, end = '')