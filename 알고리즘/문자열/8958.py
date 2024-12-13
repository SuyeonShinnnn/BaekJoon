# OX퀴즈

t = int(input())

for _ in range(t):
    score = 0
    total = 0

    s = input()
    for i in s:
        if i == 'X':
            score = 0
        elif i == 'O':
            score += 1
            total += score

    print(total)