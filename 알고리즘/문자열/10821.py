# 정수의 개수

s = input().split(',')
count = 0

for i in s:
    try:
        a = int(i)
        count += 1
    except ValueError: 
        pass

print(count)