# 통계학

import sys
input = sys.stdin.readline

n = int(input())
numList = [int(input()) for _ in range(n)]
numDict = {}

numList.sort()

for i in numList:
    if i in numDict.keys():
        numDict[i] += 1
    else:
        numDict[i] = 1

# 산술 평균
print(round(sum(numList) / n))

# 중앙값
print(numList[len(numList) // 2])

# 최빈값
max_value = max(numDict.values())
mode = []

for i in numDict:
    if numDict[i] == max_value:
        mode.append(i)
    if len(mode) > 1:
        break

if len(mode) > 1:
    print(mode[1])
else:
    print(mode[0])

# 범위
print(numList[-1] - numList[0])