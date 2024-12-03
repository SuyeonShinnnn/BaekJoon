# 피보나치

def fibonacci(n):
    for i in range(1, n + 1):
        if i == 1 or i == 2:
            arr.append(1)
        else:
            arr.append(arr[i - 1] + arr[i - 2])

t = int(input())
arr = [0]

fibonacci(10000)

for i in range(t):
    p, q = map(int, input().split(' '))
    m = arr[p] % q
    print('Case #%d: %d' %(i + 1 , m))