

from re import S


s = input()
s1 = ""
for i in s:
    if(i == 'a' or i == 'e' or i=='i' or i == 'o' or i == 'u'):
        continue
    s1 = s1 + i

print(s1)