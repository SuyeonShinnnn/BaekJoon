# 피보나치는 지겨웡~

n = int(input())
count = [1 for _ in range(n + 1)]

for i in range(2, n + 1):
    count[i] = count[i - 2] + count[i - 1] + 1

print(count[-1] % 1000000007)