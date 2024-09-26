# 듣보잡
n, m = input().split(" ")
n = int(n)
m = int(m)

a = set([])
b = set([])

for i in range(n):
    a.add(input())

for i in range(m):
    b.add(input())

c = list(a & b)

print(len(c))
c.sort()
for i in c:
    print(i)