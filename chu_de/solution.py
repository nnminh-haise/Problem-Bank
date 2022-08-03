n = int(input())
a = list(map(int, input().split(' ')))

f = set()

for item in a:
    f.add(item)

print(len(f))
