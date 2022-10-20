size = int(input())
a = [i+1 for i in range(size)]
if size%2:
    print(-1)
else:
    for i in range(0,size,2):
        a[i],a[i+1] = a[i+1],a[i]
    print(*a)