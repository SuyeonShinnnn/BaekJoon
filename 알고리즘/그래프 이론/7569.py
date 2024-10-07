# 토마토
from collections import deque

class BFS:
    def __init__(self, m, n, h):
        self.__n = n
        self.__m = m
        self.__h = h
        self.__box = {i + 1: [] for i in range(h)}
        self.__q = deque()
        self.__moveH = [1, -1, 0, 0, 0, 0]
        self.__moveX = [ 0, 0, 0, 0, 1, -1]
        self.__moveY = [0, 0 , 1, -1, 0, 0]

    def putTomato(self):
        for i in range(self.__h):
            for j in range(self.__n):
                self.__box[i + 1].append(list(map(int, input().split(" "))))
    
    def searchTomato(self):
        for height in range(1, self.__h + 1):
            for row in range(self.__n):
                for column in range(self.__m):
                    if self.__box[height][row][column] == 1:
                        self.__q.append([height, row, column])

    def runBFS(self):
        cnt = 0
        while self.__q:
            f, x, y = self.__q.popleft()
            
            for k in range(6):
                newF = f + self.__moveH[k]
                newX = x + self.__moveX[k]
                newY = y + self.__moveY[k]
                if 0 <= newX < self.__n and 0 <= newY < self.__m and 1<= newF <= self.__h and self.__box[newF][newX][newY] == 0:
                    self.__box[newF][newX][newY] = self.__box[f][x][y] + 1
                    self.__q.append([newF, newX, newY])

    def printDay(self):
        day = 0

        for key in self.__box.keys():
            for item in self.__box[key]:
                for i in item:
                    if i == 0:
                        print(-1)
                        return
                day = max(day, max(item))
        print(day - 1)

m, n, h = input().split(" ")
bfs = BFS(int(m), int(n), int(h))
bfs.putTomato()
bfs.searchTomato()
bfs.runBFS()
bfs.printDay()