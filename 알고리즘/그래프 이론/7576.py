# 토마토
from collections import deque

class BFS:
    def __init__(self, n, m):
        self.__n = n
        self.__m = m
        self.__box = []
        self.__q = deque()
        self.__moveX = [1, -1, 0, 0]
        self.__moveY = [0, 0, 1, -1]
    
    def putTomato(self):
        for i in range(self.__m):
            self.__box.append(list(map(int, input().split(" "))))
        
    def searchTomato(self):
        for i in range(self.__m):
            for j in range(self.__n):
                if self.__box[i][j] == 1:
                    self.__q.append([i, j])
    
    def startBFS(self): 
        while self.__q:
            x, y = self.__q.popleft()
            
            for k in range(4):
                newX = x + self.__moveX[k]
                newY = y + self.__moveY[k]

                if 0 <= newX < self.__m and 0 <= newY < self.__n and self.__box[newX][newY] == 0:
                    self.__box[newX][newY] = self.__box[x][y] + 1
                    self.__q.append([newX, newY])

    def printMax(self):
        day = 0
        for i in self.__box:
            for j in i:
                if j == 0:
                    print(-1)
                    return
            day = max(day, max(i))
        
        print(day - 1)
        
n, m = input().split(" ")

bfs = BFS(int(n), int(m))
bfs.putTomato()
bfs.searchTomato()
bfs.startBFS()
bfs.printMax()