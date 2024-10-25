# 로프

n = int(input())
rope = []

for i in range(n):
    rope.append(int(input()))

rope.sort()

w = []
for i in rope:
    w.append(i * n)
    n -= 1

print(max(w))