# 유학 금지

s = list(input())
lst = list('CAMBRIDGE')

for i in s:
    if i not in lst:
        print(i, end = '')