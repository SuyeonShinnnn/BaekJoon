# 그림

import queue

class BFS:
    def __init__(self, n, m):
        self.__n = n
        self.__m = m
        self.__picture = []
        self.__countList = []
        self.__visited = [[False for i in range(m)] for i in range(n)]
        self.__q = queue.Queue()
        self.__moveX = [1, -1, 0, 0]
        self.__moveY = [0, 0, 1, -1]
    
    def drawPicture(self):
        for _ in range(self.__n):
            self.__picture.append(list(map(int, input().split(' '))))
    
    def searchPicture(self):
        for i in range(self.__n):
            for j in range(self.__m):
                if self.__picture[i][j] and not self.__visited[i][j]:
                    self.bfs(i, j)

    def bfs(self, s, u):
        self.__visited[s][u] = True
        self.__q.put([s, u])
        count = 0

        while not self.__q.empty():
            count += 1

            front = self.__q.get()
            x = front[0]
            y = front[1]

            for i in range(4):
                newX = x + self.__moveX[i]
                newY = y + self.__moveY[i]

                if 0 <= newX < n and 0 <= newY < m and self.__picture[newX][newY] and not self.__visited[newX][newY]:
                    self.__visited[newX][newY] = True
                    self.__q.put([newX, newY])

        self.__countList.append(count)

    def printCount(self):
        print(len(self.__countList))
        if len(self.__countList) == 0:
            print(0)
        else:
            print(max(self.__countList))

n, m = map(int, input().split(' '))

pic = BFS(n, m)
pic.drawPicture()
pic.searchPicture()
pic.printCount()