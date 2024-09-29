# 비밀번호 찾기

n, m = input().split(" ")
n = int(n)
m = int(m)

pw = {}
for i in range(n):
    site, password = input().split(" ")
    pw[site] = password

pwList = []
for i in range(m):
    site = input()
    pwList.append(pw[site])

for i in pwList:
    print(i)