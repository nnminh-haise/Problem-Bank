n, m = list(map(int, input().split(' ')))
a = []
f = [[1 for j in range(0, m)] for i in range(0, n)]

for i in range(0, n):
    line = list(map(int, input().split(' ')))
    a.append(line)


answer = int(1)
for i in range(1, n):
    for j in range(1, m):
        if a[i][j] == a[i - 1][j - 1] and a[i][j] == a[i - 1][j] and a[i][j] == a[i][j - 1]:
            f[i][j] = min(f[i - 1][j - 1], min(f[i - 1][j], f[i][j - 1])) + 1
        answer = max(answer, f[i][j])

print(answer)