a = input()

for i in a.lower():
    if i not in ['a','e','i','o','u']:
        print(".",end="")
        print(i,end="")
print()