# 파스칼의 삼각형

def makePascal(n):
    for i in range(n):
        if i == 0:
            triangle.append([1])
        elif i == 1:
            triangle.append([1, 1])
        else:
            triangle.append([1])
            for j in range(i - 1):
                triangle[i].append(triangle[i - 1][j] + triangle[i - 1][j + 1])
            triangle[i].append(1)

n, k = map(int, input().split(' '))
triangle = []

makePascal(n)

print(triangle[n - 1][k - 1])
