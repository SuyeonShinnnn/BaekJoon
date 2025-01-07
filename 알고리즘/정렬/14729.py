# 칠무해

import sys
input = sys.stdin.readline

n = int(input())
scores = []

for i in range(n):
    scores.append(float(input()))

scores.sort()

for i in range(7):
    print('%0.3f' %scores[i])