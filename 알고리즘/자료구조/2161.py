# 카드1

n = int(input())
card = list(range(1, n + 1))

front = 0
result = []
while len(card) != 1:
    result.append(card[front])
    card.remove(card[front])
    card.append(card[front])
    card.remove(card[front])
result.append(card[front])

for i in result:
    print(i, end = " ")
