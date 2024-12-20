# 콘테스트

w = list(int(input()) for i in range(10))
k = list(int(input()) for i in range(10))

w.sort()
k.sort()

print(sum(w[-1:-4:-1]), sum(k[-1:-4:-1]))