yr =  int(input())
while(True):
    yr+=1
    a = str(yr)
    if a[0] != a[1] and a[0]!= a[2] and a[0]!= a[3] and a[1]!= a[2] and a[1]!=a[3] and a[2]!=a[3]:
        print(a)
        break
