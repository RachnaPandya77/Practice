num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

print("\n")
print("1. Add")
print("2. Sub")
print("3. Mul")
print("4. div")

choice = int(input("Enter Choice(1 to 4): "))

if choice == 1:
    print("Sum = ", num1 + num2)

elif choice == 2:
     print("sub: ", num1 - num2)

elif choice == 3:
     print("mul = ", num1 * num2)

elif choice == 4:
     print("Div = ", num1 / num2)

else:
    print("invalid input")



