# 영역 구하기
from collections import deque

class BFS:
    def __init__(self, n, m):
        self.__n = n
        self.__m = m
        self.__paper = [[0 for i in range(m)] for i in range(n)]
        self.__visited = [[False for i in range(m)] for i in range(n)]
        self.__q = deque()
        self.__count = []
        self.__moveX = [1, -1, 0, 0]
        self.__moveY = [0, 0, 1, -1]

    def splitPaper(self, k):
        for i in range(k):
            dot = list(map(int, input().split(" ")))
            x1, y1 = dot[0], dot[1]
            x2, y2 = dot[2], dot[3]
            
            for i in range(y1, y2):
                for j in range(x1, x2):
                    self.__paper[i][j] = 1
            
    def searchArea(self):
        for i in range(self.__n):
            for j in range(self.__m):
                if not self.__paper[i][j] and not self.__visited[i][j]:
                    self.startBFS(i, j)

    def startBFS(self, s, u):
        self.__q.append([s, u])
        self.__visited[s][u] = True
        
        cnt = 0
        while self.__q:
            x, y = self.__q.popleft()
            cnt += 1
            
            for k in range(4):
                newX = x + self.__moveX[k]
                newY = y + self.__moveY[k]

                if 0 <= newX < self.__n and 0 <= newY < self.__m and not self.__paper[newX][newY] and not self.__visited[newX][newY]:
                    self.__visited[newX][newY] = True
                    self.__q.append([newX, newY])
    
        self.__count.append(cnt)
            
    def printCount(self):
        self.__count.sort()
        print(len(self.__count))
        for i in self.__count:
            print(i,end = " ")

m, n, k = input().split(" ")
bfs = BFS(int(m), int(n))
bfs.splitPaper(int(k))
bfs.searchArea()
bfs.printCount()