# 그릇

q = list(input())
height = 10

for i in range(1, len(q)):
    if q[i - 1] != q[i]:
        height += 10
    else:
        height += 5
print(height)