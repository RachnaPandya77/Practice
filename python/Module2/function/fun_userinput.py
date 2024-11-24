def getdata(id,name):
    print("ID: ",id)
    print("Name: ",name)

n = int(input("Enter no, of student: "))

for i in range(n):
    stuid = input("Enter id: ")
    stunm = input("Enter name: ")

    getdata(stuid, stunm)


