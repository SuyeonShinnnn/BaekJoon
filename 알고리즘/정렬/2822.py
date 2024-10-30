# 점수 계산

scores = []
for _ in range(8):
    scores.append(int(input()))

sortedScores = sorted(scores)
top5 = sortedScores[3:]
print(sum(top5))

idx = []
for i in range(5):
    idx.append(scores.index(top5[i]))

idx.sort()
for i in idx:
    print(i + 1, end = ' ')