queries = int(input())

for query in range(0, queries):
    n = int(input())
    p = (n + 3) // 3
    d = (n + 3) % 3
    b = p
    a = p - 1
    c = p - 2

    if d == 2:
        a += 1
        b += 1
    elif d == 1:
        b += 1

    print(a, b, c)
