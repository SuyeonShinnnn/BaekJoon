# 첫 글자를 대문자로

n = int(input())

for _ in range(n):
    s = input()

    if s[0].islower():
        f = s[0].upper()
        s = f + s[1:] 

    print(s)