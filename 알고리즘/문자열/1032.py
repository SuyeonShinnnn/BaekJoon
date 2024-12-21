# 명령 프롬프트

n = int(input())
files = list(list(input()) for _ in range(n))
pattern = ''

for i in range(len(files[0])):
    for j in range(len(files) - 1):
        if files[j][i] != files[j + 1][i]:
            pattern += '?'
            break
    if len(pattern) == i:
        pattern += files[0][i]


print(pattern)