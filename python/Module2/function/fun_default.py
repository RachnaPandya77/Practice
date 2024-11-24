# function with default value

def stu(id,name="None"):
        print("student id is : ",id)
        print("Student name is : ", name)


id = int(input("Enter student id :"))
name = input("Enter student name: ")

stu(id)