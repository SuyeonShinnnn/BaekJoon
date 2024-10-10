# 생일

n = int(input())
info = []
for i in range(n):
    name, d, m, y = input().split(" ")
    d, m, y = map(int, (d, m, y))
    info.append([y, m, d, name])

info.sort()
print(info[n - 1][3])
print(info[0][3])