# 섬의 개수
import queue
class BFS:
    def __init__(self, w, h):
        self.__w = w
        self.__h = h
        self.__q = []
        self.__map = [[] for i in range(h)]
        self.__moveX = [1, -1, 0, 0, 1, -1, -1, 1]
        self.__moveY = [0, 0, 1, -1, 1, 1, -1, -1]
    
    def setMap(self):
        self.__countIsland = 0
        for i in range(self.__h):
            self.__map[i] = list(map(int, input().split(" ")))
        self.__visited = [[False for i in range(self.__w)] for i in range(self.__h)]
    
    def visitMap(self):
        for i in range(self.__h):
            for j in range(self.__w):
                if self.__map[i][j] == 1 and self.__visited[i][j] is False:
                    self.startBFS(i, j)
                    self.__countIsland += 1

    def startBFS(self, i, j):
        self.__q.append([i, j])

        while len(self.__q) != 0:
            pop = self.__q[0]
            del self.__q[0]

            x = pop[0]
            y = pop[1]

            for k in range(8):
                newX = x + self.__moveX[k]
                newY = y + self.__moveY[k]

                if newX >= 0 and newX < self.__h and newY >= 0 and newY < self.__w and self.__map[newX][newY] and not self.__visited[newX][newY]:
                    self.__q.append([newX, newY])
                    self.__visited[newX][newY] = 1
    def getCount(self):
        return self.__countIsland

while True:
    w, h = input().split()
    if int(w) == 0 and int(h) == 0:
        break
    bfs = BFS(int(w), int(h))
    bfs.setMap()
    bfs.visitMap()
    print(bfs.getCount())
    