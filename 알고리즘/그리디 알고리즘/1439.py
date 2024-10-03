# 뒤집기

s = input()
splitZero = s.split('0')
splitOne = s.split('1')

splitZero = list(filter(None, splitZero))
splitOne = list(filter(None, splitOne))

len0 = len(splitZero)
len1 = len(splitOne)

if len0 < len1:
    print(len0)
else:
    print(len1)