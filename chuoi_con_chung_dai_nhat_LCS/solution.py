f = input()
g = input()

n = len(f)
m = len(g)

dp = [[[] for i in range(0, m + 1)] for i in range(0, n + 1)]

for i in range(0, n + 1):
    dp[i][0] = 0
for j in range(0, m + 1):
    dp[0][j] = 0

for i in range(1, n + 1):
    for j in range(1, m + 1):
        if f[i - 1] == g[j - 1]:
            dp[i][j] = dp[i - 1][j - 1] + 1
        else:
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])

#print(dp[n][m])

longest_common_substring = ""

i = n
j = m

while i > 0 and j > 0:
    if f[i - 1] == g[j - 1]:
        longest_common_substring = f[i - 1] + longest_common_substring
        i -= 1
        j -= 1
    else:
        while i >= 1 and dp[i][j] == dp[i - 1][j]:
            i -= 1
        while j >= 1 and dp[i][j] == dp[i][j - 1]:
            j -= 1

print(longest_common_substring)
