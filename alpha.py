
s = input()
s1 = ""
for i in s:
    if i.isalpha() == True:
        continue
    else:
        s1 = s1 + i


print(s1)