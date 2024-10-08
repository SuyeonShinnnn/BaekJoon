# N과 M (1)

def backtracking(depth):
    if depth == m:
        for i in range(m):
            print(arr[i], end = " ")
        print()
    for i in range(n):
        if not visited[i]:
            visited[i] = True
            arr[depth] = i + 1
            backtracking(depth + 1)
            visited[i] = False

n, m = input().split(" ")
n, m = int(n), int(m)
arr = []
visited = [False for i in range(n)]
for i in range(n):
    arr.append(i + 1)
backtracking(0)