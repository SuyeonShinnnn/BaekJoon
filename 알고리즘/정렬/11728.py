# 배열 합치기

n, m = map(int, input().split(' '))

a = list(map(int, input().split(' ')))
b = list(map(int, input().split(' ')))

c = sorted(a + b)
for i in c:
    print(i, end = ' ')