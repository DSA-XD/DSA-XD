sentence = input("Enter the string - ")
chrs = ["a","b","c","d","e","f","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
st = set(sentence)
for i in chrs:
    if i not in st:
        # return False
        print("NO")
else:
    # return True
    print("YES")