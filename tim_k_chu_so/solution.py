def binary_power(a, b):
    if b == 0:
        return 1
    if b == 1:
        return a
    temp = binary_power(a, b // 2)
    if b % 2 == 0:
        return temp * temp
    return temp * temp * a


n, k = list(map(int, input().split(' ')))

k_factor = 1
for i in range(1, n + 1):
    k_factor *= i

min_value = binary_power(10, k)
while k_factor >= min_value:
    k_factor //= 10

print(k_factor)


"""
Time complexity: O(n)
"""