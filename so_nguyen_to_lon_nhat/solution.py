max_n = 100000
primes = list()
is_prime = [True for i in range(0, max_n + 7)]

is_prime[0] = False
is_prime[1] = False

def sieveOfEratosthenes():
    for p in range(2, max_n):
        if (is_prime[p]) and (p * p <= max_n):
            q = p * p
            while q <= max_n:
                is_prime[q] = False
                q += p

    for p in range(2, max_n):
        if is_prime[p]:
            primes.append(p)


sieveOfEratosthenes()

t = input()
ans = -1

for prime in primes:
    if str(prime) in t:
        ans = max(ans, prime)

print(ans)
