import re

name = input("Enter Name: ")
print(name)

a = re.findall('[A-Za-z]',name)
print(a)

if a:
    print("username valid")
else:
    print("Error")