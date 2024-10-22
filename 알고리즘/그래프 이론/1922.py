# 네트워크 연결

def searchNode():
    min = float('inf')
    minpos = -1
    for i in range(n):
        if distance[i] < min and not visited[i]:
            min = distance[i]
            minpos = i
    return minpos

def shortestPath(start):
    for i in range(n):
        distance[i] = computer[start][i]

    visited[start] = True
    distance[start] = 0

    for i in range(n - 1):
        u = searchNode()
        visited[u] = True

        for j in range(n):
            if not visited[j]:
                if distance[j] > computer[u][j] and not visited[j]:
                    distance[j] = computer[u][j]

n = int(input()) # 컴퓨터 수
m = int(input()) # 연결 가능한 선의 수
computer = [[float('inf') for i in range(n)] for i in range(n)]
distance = [0 for i in range(n)]
visited = [False for i in range(n)]

for i in range(m):
    a, b, c = map(int, input().split(' '))
    computer[a - 1][b - 1] = c
    computer[b - 1][a - 1] = c

shortestPath(0)
print(sum(distance))