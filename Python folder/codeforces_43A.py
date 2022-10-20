t_cases= int(input())
main_dict = dict()
for i in range(t_cases):
    x = input()
    if x in main_dict:
        main_dict[x]+=1
    else:
        main_dict[x]=0

mx = [i for i in main_dict if main_dict[i]==max(main_dict.values())]
print(*mx)