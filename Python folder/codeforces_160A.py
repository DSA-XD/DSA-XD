coins = int(input())
coin_val = list(map(int,input().split()))
coin_val.sort(reverse=True)
# print(coin_val)
for i in range(1,len(coin_val)):
    if sum(coin_val[:i])>sum(coin_val[i:]):
        print(i)
        break
else:
    print(coins)