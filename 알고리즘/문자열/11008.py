# 복붙의 달인

t = int(input())

for _ in range(t):
    count = 0
    s, p = input().split(' ')
    
    if p in s:
        count = s.count(p)

    s =  list(filter(None, s.split(p)))

    for i in s:
        count += len(i)
    print(count)