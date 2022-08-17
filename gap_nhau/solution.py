s1 = int(input())
v1 = int(input())
s2 = int(input())
v2 = int(input())

result = (s1 - s2) // (v2 - v1)

if result >= 0:
    print(result)
else:
    print(-1)