# 피보나치 비스무리한 수열

def fibonacci(n):
    for i in range(n):
        if i == 0 or i == 1 or i == 2:
            arr.append(1)
        else:
            arr.append(arr[i - 1] + arr[i - 3])

n = int(input())
arr = []

fibonacci(n)
print(arr[-1])