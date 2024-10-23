# 요세푸스 문제

n, k = map(int, input().split(' '))
lst = list(range(1, n + 1))
p = []

index = 0
while len(lst) != 0:
    index += k - 1
    index = index % len(lst)

    target = lst[index]

    lst.remove(target)
    p.append(target)
    
print('<', end = '')
for i in range(n - 1):
    print(p[i], end = ', ')
print(p[-1], end = '>')