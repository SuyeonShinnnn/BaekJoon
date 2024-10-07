# 중복 빼고 정렬하기

n = int(input())

s = []
s.extend(map(int, input().split(" ")))

s = list(set(s))
s.sort()

for i in s:
    print(i, end = ' ')