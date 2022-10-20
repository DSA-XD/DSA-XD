t_cases = int(input())

def numberToBase(n, b):
    if n == 0:
        return [0]
    digits = []
    while n:
        digits.append(int(n % b))
        n //= b
    return digits[::-1]

while(t_cases):
    t_cases -=1
    a = int(input())
    for i in range(2,a):
        x = numberToBase(a,i)
        if x!=x[::-1]:
            print("FALSE")
            break
    else:
        print("TRUE")
