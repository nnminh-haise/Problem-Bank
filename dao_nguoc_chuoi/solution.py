def reverseString(s):
    for i in range(0, len(s) // 2):
        temp = s[i]
        s[i] = s[len(s) - 1 - i]
        s[len(s) - 1 - i] = temp

    s1 = ""
    for item in s:
        s1 += item

    return s1


print(reverseString(list(map(str, input()))))