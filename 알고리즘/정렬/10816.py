# 숫자 카드 2

n = int(input())
nCard = []
nCard.extend(map(int, input().split(" ")))
nCard.sort()
countCard = {}
for i in nCard:
    if i in countCard:
        countCard[i] += 1
    else:
        countCard[i] = 1

m = int(input())
mCard = []
mCard.extend(map(int, input().split(" ")))

for i in range(m):
    if mCard[i] in countCard.keys():
        print(countCard[mCard[i]], end = " ")
    else:
        print(0, end = " ")