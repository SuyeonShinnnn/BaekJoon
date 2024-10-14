# 잃어버린 괄호

# - 기준으로 split
n = input().split("-")

# - 괄호 단위로 묶인 + 기준으로 split
for i in range(len(n)):
    n[i] = n[i].split("+")

# 괄호 안의 숫자끼리 합하기
sum = []
for i in n:
    s = 0
    for j in i:
        s += int(j)
    sum.append(s)

min = sum[0]
for i in range(1, len(sum)):
    min -= sum[i]

print(min)