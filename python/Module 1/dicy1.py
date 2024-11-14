keys = ['id', 'name', 'sub']
mydict = {}

for i in keys:
    value = input(f"Enter {i}: ")
    mydict[i] = value

print(mydict)