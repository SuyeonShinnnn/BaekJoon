# 정열적인 정렬

n = int(input())
arr = list(map(int, input().split(' ')))
arr.sort()

for i in arr:
    print(i, end = ' ')