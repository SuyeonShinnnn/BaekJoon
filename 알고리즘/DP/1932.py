# 정수 삼각형

def getMax(t):
    for i in range(1, len(t)):
        for j in range(len(t[i])):
            if j==0:
                t[i][j] = t[i][j] + t[i-1][j]
            elif j == len(t[i]) - 1: 
                t[i][j]= t[i][j]+ t[i-1][j-1]
            else:
                t[i][j] = max(t[i-1][j-1], t[i-1][j]) + t[i][j]

n = int(input())
triangle = []

for i in range(n):
    triangle.append(list(map(int, input().split(' '))))

getMax(triangle)

print(max(triangle[n - 1]))