# 줄번호

n = int(input())
text = [input() for _ in range(n)]

for i in range(n):
    print(i + 1, end = '. ')
    print(text[i])