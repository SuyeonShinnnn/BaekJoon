# 파일 정리

n = int(input())
files = {}

for i in range(n):
    extension = input().split('.')[1]
    if extension in files:
        files[extension] += 1
    else:
        files[extension] = 1
    
sortFile = sorted(files.items())

for k, v in sortFile:
    print(k, v)