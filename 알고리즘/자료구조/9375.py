# 패션왕 신해빈

n = int(input())

for _ in range(n):
    count = int(input())
    clothes = {}
    
    for _ in range(count):
        name, kind = input().split(' ')

        if kind in clothes.keys():
            clothes[kind].append(name)
        else:
            clothes[kind] = [name]
        
    count = 1
    
    for k in clothes.keys():
        count *= (len(clothes[k]) + 1)

    print(count - 1)