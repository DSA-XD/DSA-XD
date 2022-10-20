def upper_counter(a):
    x = 0
    for i in a:
        if i.isupper():
            x+=1
    return x

a = input()
if upper_counter(a)>(len(a)//2):
    print(a.upper())
else:
    print(a.lower())
