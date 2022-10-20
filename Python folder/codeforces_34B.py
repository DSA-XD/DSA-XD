t_cases,n = list(map(int, input().split()))

lst = list(map(int, input().split()))
# print(lst)
lst = sorted(lst)
print(lst)
s = 0
for i in range(n):
    s+=lst[i]
print(s if s>0 else -s)