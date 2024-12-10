# 단어 뒤집기

n = int(input())
for _ in range(n):
    s = input().split(' ')
    
    for i in s:
        i = i[-1::-1]
        print(i, end = ' ')