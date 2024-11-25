s1 = open('stu.txt','a') # open file append mode

n = int(input("enter num of student: "))# get num of student

for i in range(n):
    print(f"Enter data : {i + 1}")
    name = input("name: ")
    age = input("age: ")
    city = input("city: ")

s1.write(f"name:{name}\nAge:{age}\ncity:{city}\n\n")

