# 30

n = input()

if "0" not in n:
    print(-1)

else:
    total = 0
    for i in range(len(n)):
        total += int(n[i])

    if total % 3 != 0:
        print(-1)
    
    else:
        sortedNum = sorted(n, reverse=True)
        answer = "".join(sortedNum)
        print(answer)