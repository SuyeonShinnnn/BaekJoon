# Yangjojang of The Year

t = int(input())

for _ in range(t):
    n = int(input())
    info = {}

    for _ in range(n):
        s, l = input().split( )
        info[s] = int(l)

    sorted_info = sorted(info.items(), key = lambda x: x[1])
    print(sorted_info[-1][0])