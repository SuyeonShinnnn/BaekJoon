# 보물
n = int(input())
a = list(map(int, input().split(" ")))
b = list(map(int, input().split(" ")))

a.sort()
c = sorted(b, reverse = True)

mul = []
for i in range(n):
    mul.append(a[i] * c[i])


sum = 0
for i in range(n):
    sum += mul[i]

print(sum)