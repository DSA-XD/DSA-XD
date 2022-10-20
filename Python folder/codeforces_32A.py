x = input()
tup = tuple(x)
a = 0
while True:
    if a==len(x):
        break
    if x[a]==".":
        a+=1
        print("0",end="")
    elif x[a]=="-" and x[a+1]==".":
        a+=2
        print("1",end="")
    elif x[a]=="-" and x[a+1]=="-":
        a+=2
        print("2",end="")
print()