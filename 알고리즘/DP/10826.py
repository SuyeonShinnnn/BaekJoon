# 피보나치 수 4

def fibonacci(n):
    for i in range(2, n + 1):
        arr.append(arr[i - 1] + arr[i - 2])

n = int(input())
arr = [0, 1]

fibonacci(n)
print(arr[n])