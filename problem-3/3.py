N = 600851475143

def findMaxPrimeFactor(n): 
    factors = []
    d = 2
    while n > 1:
        while n % d == 0:
            factors.append(d)
            n /= d
        d += 1
        if d * d > n:
            if n > 1: factors.append(n)
            break
    return max(factors)

print(findMaxPrimeFactor(N))