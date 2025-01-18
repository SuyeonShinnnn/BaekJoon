# 단어순서 뒤집기

n = int(input())
text = [input().split(' ') for _ in range(n)]

idx = 1
for i in text:
    print('Case #%d:' %(idx), end = ' ')
    idx += 1

    for j in range(len(i) - 1, -1, -1):
        print(i[j], end = ' ')
    print()