t_cases = int(input())
while(t_cases):
    t_cases-=1
    a,b,c = list(map(int,input().split()))
    print(a*(b-c))