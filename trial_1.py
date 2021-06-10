from random import randint

str_org = str(input())

str_en= "";

for i in str_org:
    n = randint(1,15)
    str_en += chr(ord(i)+n) + str(n+50)

print(str_en)
