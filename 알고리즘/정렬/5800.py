# 성적 통계

def getLargestGap(s):
    max = -1
    for i in range(len(s) - 1):
        if s[i] - s[i + 1] > max:
            max = s[i] - s[i + 1]

    return max

k = int(input())

scores = []
for _ in range(k):
    s = list(map(int, input().split(' ')))
    scores.append(s[1:])

for i in range(k):
    sortedScore = sorted(scores[i], reverse = True)
    largestGap = getLargestGap(sortedScore)
    print("Class", i + 1)
    print("Max %d, Min %d, Largest gap %d" %(sortedScore[0], sortedScore[-1], largestGap))

