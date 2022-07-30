def solution(s, t):
    n = len(s)
    m = len(t)

    if n != m:
        return False

    a = [ord(char) for char in s]
    b = [ord(char) for char in t]

    a = sorted(a)
    b = sorted(b)

    for i in range(0, n):
        if a[i] != b[i]:
            return False

    return True


s = input()
t = input()

result = solution(s, t)

print(result)
