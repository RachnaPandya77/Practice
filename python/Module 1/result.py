# Write a Python program to calculate grades based on percentage using if-else ladder

C = int(input("Mark of C: "))
Cpp = int(input("Mark of Cpp: "))
python = int(input("Mark of python: "))
Java = int(input("Mark of java: "))
print("\n")

total = C + Cpp + python + Java
print("Total Mark : ",total)

percentage = total / 4
print("Percentage: ", percentage)

print("_________________")

if percentage >= 90:
    print("First Class")
elif percentage >= 80:
    print("Second Class")
elif percentage >= 70:
    print("Third Class")
else:
    print("Pass class")


