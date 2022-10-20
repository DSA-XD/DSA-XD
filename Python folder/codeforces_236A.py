a = input()
lst = []
for i in a:
    if i not in lst:
        lst.append(i)
    # if ord(i)%2:
    #     print("IGNORE HIM!")
    #     break
if len(lst)%2:
    print("")
else:
    print("CHAT WITH HER!")
