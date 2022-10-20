a,b,n = list(map(int,input().split()))

for i in range(n):
    c = 0
    j = 0
    # while True:
    for i in range(1,10):
        if (a*10+i)%b==0:
            if j==i:
                pass
            else:
                j = i
                a = a*10+i
                # print(j)
                break
    else:
        a = -1
        print(a)
        break
if a!=-1:
    print(a)