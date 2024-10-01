# 붙임성 좋은 총총이
n = int(input())

dance = set([])
for i in range(n):
    a, b = input().split(" ")
    if (a == "ChongChong" or b == "ChongChong") or (a in dance or b in dance):
        dance.add(a)
        dance.add(b)
    
print(len(dance))