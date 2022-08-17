x, y, z = list(map(int, input().split(' ')))

rss = z * (x - y) // y

if (z * (x - y)) % y != 0:
    res += 1

print(res)