def reverseString(s: list[str]):
    for i in range(0, len(s) // 2):
        temp = s[i]
        s[i] = s[len(s) - 1 - i]
        s[len(s) - 1 - i] = temp


f = list(map(str, input()))
reverseString(f)
print(f)