def find3or5(n): 
    sum = 0
    for i in range(n):
        sum += i if i % 5 == 0 or i % 3 == 0 else 0
    return sum

print(find3or5(1000))
