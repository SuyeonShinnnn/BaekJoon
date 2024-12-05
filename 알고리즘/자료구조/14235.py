# 크리스마스 선물

import heapq

n = int(input())
gift = []

for _ in range(n):
    a = list(map(int, input().split()))
    
    if a[0] == 0:
        if len(gift) == 0:
            print(-1)
        else:
            t = -heapq.heappop(gift)
            print(t)
    else:
        for i in range(a[0]):
            heapq.heappush(gift, -a[i + 1])