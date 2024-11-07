# 점화식

def formula(n):
    for i in range(n + 1):
        if i == 0:
            t.append(1)
        else:
            x = 0
            reverseT = t[-1::-1]
            for j in range(i):
                x += t[j] * reverseT[j]
            t.append(x)

n = int(input())
t = [] 

formula(n)
print(t[-1])