# 알파벳 개수

s = input()
a = {}

for i in range(97, 123):
    a[chr(i)] = 0

for i in s:
    a[i] += 1

for v in a.values():
    print(v, end = ' ')