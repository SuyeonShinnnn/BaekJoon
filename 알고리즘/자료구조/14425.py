# 문자열 집합

n, m = input().split(" ")
n = int(n)
m = int(m)

s = set([])
for i in range(n):
    s.add(input())

count = 0
for i in range(m):
    text = input()
    if text in s:
        count += 1

print(count)