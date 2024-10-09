# A와 B

s = input()
t = input()

while len(s) != len(t):
    if t[-1] == 'A':
        t = t[:-1] # A 삭제
    elif t[-1] == 'B':
        t = t[:-1] # B 삭제
        t = t[-1::-1] # 뒤집기

if s == t:
    print(1)
else:
    print(0)