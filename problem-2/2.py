import math

max = 4000000
sum = 0

def fibonacci(n): 
    phi = (1 + math.sqrt(5)) / 2
    return round(pow(phi, n) / math.sqrt(5))

def findEvenFib(n): 
    global sum
    if fibonacci(n) >= max: return sum
    else:
        sum += fibonacci(n) if not (fibonacci(n) & 1) else 0
        return findEvenFib(n + 1)

print(findEvenFib(sum))
