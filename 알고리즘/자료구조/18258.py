# 큐 2
from collections import deque
import sys

class Queue:
    def __init__(self):
        self.q = deque()

    def run(self, n):
        for i in range(n):
            order = sys.stdin.readline().split()

            # push
            if order[0] == 'push':
                self.q.append(int(order[1]))

            # pop
            elif order[0] == 'pop':
                if len(self.q) == 0:
                    print(-1)
                else:
                    print(self.q.popleft())

            # size
            elif order[0] == 'size':
                print(len(self.q))
            
            # empty
            elif order[0] == 'empty':
                if len(self.q) == 0:
                    print(1)
                else:
                    print(0)

            
            # front
            elif order[0] == 'front':
                if len(self.q) == 0:
                    print(-1)
                else:
                    print(self.q[0])

            # back
            elif order[0] == 'back':
                if len(self.q) == 0:
                    print('-1')
                else:
                    print(self.q[-1])

n = int(input())
queue = Queue()
queue.run(n)