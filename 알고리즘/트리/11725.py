# 트리의 부모 찾기

import queue
class BFS:
    def __init__(self, n):
        self.__n = n
        self.__tree = {}
        for i in range(1, n + 1):
            self.__tree[i] = []
        self.__visited = [0 for i in range(n)]
        self.__visited[0] = 1
        self.__q = queue.Queue()
    def setTree(self):
        for i in range(n - 1):
            x, y = input().split(" ")
            x = int(x)
            y = int(y)
            self.__tree[x].append(y)
            self.__tree[y].append(x)

    def visitTree(self, node):
        self.__q.put(node)
        
        while not self.__q.empty():
            x = self.__q.get()

            for j in self.__tree[x]:
                if self.__visited[x - 1] != 0 and self.__visited[j - 1] == 0:
                    self.__visited[j - 1] = x
                    self.__q.put(j)

    def getVisit(self):
        for i in range(1, n):
            print(self.__visited[i])

n = int(input())
bfs = BFS(n)
bfs.setTree()
bfs.visitTree(1)
bfs.getVisit()