# 점수 집계

t = int(input())
scores = []

for _ in range(t):
    scores.append(list(map(int, input().split(' '))))

for i in scores:
    i.sort()
    if i[-2] - i[1] >= 4:
        print('KIN')
    else:
        print(sum(i[1:4]))