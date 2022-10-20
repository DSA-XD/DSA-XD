length = int(input())
a = input().lower()
if length < 26:
    print("NO")
else:
    lst = "abcdefghijklmnopqrstuvwxyz"
    for i in lst:
        if i not in a:
            print("NO")
            break
    else:
        print("YES")