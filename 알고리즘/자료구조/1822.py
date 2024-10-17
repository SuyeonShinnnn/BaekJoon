# 차집합

n, m = map(int, input().split(" "))
setA = set(map(int, input().split(" ")))
setB = set(map(int, input().split(" ")))

diffAB = list(setA - setB)
diffAB.sort()

print(len(diffAB))
for i in diffAB:
    print(i, end = ' ')