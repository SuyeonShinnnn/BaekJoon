# A → B

a, b = map(int, input().split(' '))
count = 0

while True:
    temp = b
    if b % 10 == 1:
        b //= 10
    elif b % 2 == 0:
        b //= 2

    count += 1

    if a == b:
        count += 1
        break
    elif temp == b:
        count = -1
        break

print(count)