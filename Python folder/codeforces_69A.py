t_cases = int(input())
x = y = z = 0
for i in range(t_cases):
    a,b,c = list(map(int,input().split()))
    x+=a
    y+=b
    z+=c
if (x==y==z==0):
    print("YES")
else:
    print("NO")
