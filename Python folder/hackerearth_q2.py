t_cases = int(input())
while(t_cases):
    t_cases-=1
    num = list(map(int,input().split()))
    even = [num[i] for i in range(0,len(num),2)]
    odd = [num[i] for i in range(1,len(num),2)]
    print(max(sum(odd),sum(even)))