# 뜨거운 붕어빵

n , m = map(int, input().split(' '))
bread = []

for i in range(n):
    bread.append(list(input()))

for i in bread:
    i = i[-1::-1]
    for j in i:
        print(j, end = '')
    print()