n = int(input())

f = []

for i in range(0, n):
    inp = list(map(int, input().split(' ')))
    f.append(inp)


dp = [[[] for i in range(0, 3)] for i in range(0, n)]

dp[0] = f[0]

for i in range(1, n):
    dp[i][0] = f[i][0] + max(dp[i - 1][1], dp[i - 1][2])
    dp[i][1] = f[i][1] + max(dp[i - 1][0], dp[i - 1][2])
    dp[i][2] = f[i][2] + max(dp[i - 1][1], dp[i - 1][0])

print(max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2])))
