s = input()

hashmap = dict()

for char in s:
    if char not in hashmap:
        hashmap[char] = 1
    else:
        hashmap[char] += 1

answer = len(s)
for i in range(0, len(s)):
    if hashmap[s[i]] == 1:
        answer = min(answer, i)

if answer == len(s):
    print(-1)
else:
    print(answer)