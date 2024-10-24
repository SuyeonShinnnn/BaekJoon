# 최소 힙

import heapq
import sys

n = int(sys.stdin.readline())
h = []

for i in range(n):
    order = int(sys.stdin.readline())
    if order == 0:
        try:
            print(heapq.heappop(h))
        except:
            print(0)
    else:
        heapq.heappush(h, order)