import random
import datetime

f1=open('file3.txt','a')
x = int(input("enter data: "))
for i in range:
    created=datetime.datetime.now()
    id=random.randint(1000,9999)
    name  = input("Enter name: ")
    city = input("Enter city: ")
    f1.write(f"{created}\n {id}\n {name}\n {city}\n")


