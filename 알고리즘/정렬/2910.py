# 빈도 정렬

n, c = map(int, input().split(' '))
lst = list(map(int, input().split(' ')))
dic = {}

for l in lst:
    if l in dic.keys():
        dic[l] += 1
    else:
        dic[l] = 1

dic_sort = sorted(dic.items(), key = lambda x:x[1], reverse = True)
for k, v in dic_sort:
    for _ in range(v):
        print(k, end = ' ')
