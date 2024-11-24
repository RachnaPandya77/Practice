"""def getdata(id,name,city="JTP", sub='Python'):
    print("ID: ",id)
    print("Name: ",name)
    print("city: ",city)
    print("sub: ",sub)

getdata(101,"happy")
"""

#with user input

"""def getdata(id, name, city="JTP", sub='Python'):
    print("ID: ", id)
    print("Name: ", name)
    print("City: ", city)
    print("Subject: ", sub)

id = int(input("Enter ID: "))
name = input("Enter Name: ")
city = input("Enter City (default is JTP): ")
sub = input("Enter Subject (default is Python): ")

getdata(id, name, city, sub)"""

# not showing default city or sub for that use of condition

def getdata(id, name, city="JTP", sub='Python'):
    if not city:
        city = "JTP"
    if not sub:
        sub = "Python"
    print("ID: ", id)
    print("Name: ", name)
    print("City: ", city)
    print("Subject: ", sub)

id = int(input("Enter ID: "))
name = input("Enter Name: ")
city = input("Enter City (default is JTP): ")
sub = input("Enter Subject (default is Python): ")

getdata(id, name, city, sub)



