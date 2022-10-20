t_cases = int(input())
inp = input()
c = 0
a=1
x = inp[0]
while(True):
    if a==t_cases:
        break
    if inp[a] == x:
        c+=1
        a+=1
    else:
        x=inp[a]
        a+=1
print(c)