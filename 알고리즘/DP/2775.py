# 부녀회장이 될테야

t = int(input())

for _ in range(t):
    k = int(input())
    n = int(input())

    dp = []
    dp.append(list(range(1, n + 1)))

    for i in range(k):
        layer = []
        for j in range(n):
            if j == 0:
                layer.append(dp[i][0])
            else:
                layer.append(layer[j - 1] + dp[i][j])
        dp.append(layer)
    print(dp[-1][-1])