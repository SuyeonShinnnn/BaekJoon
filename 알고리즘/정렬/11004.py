# K번째 수

n, k = input().split(" ")
n = int(n)
k = int(k)

a = list(map(int, input().split(" ")))

a.sort()
print(a[k - 1])