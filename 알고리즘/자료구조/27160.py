# 할리갈리

n = int(input())
fruits = {}

for _ in range(n):
    f, count = input().split()

    if f not in fruits.keys():
        fruits[f] = 0
    
    fruits[f] += int(count)

if 5 in fruits.values():
    print("YES")
else:
    print("NO")