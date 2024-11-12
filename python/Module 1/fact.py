# Write a Python program to get the Factorial number of given number


n = int(input("Enter a number: "))#5
fact = 1

for i in range(1, n+1):
    fact*=i

print("factorial: ", end="")
print(fact)

# i=1, 1+1=2
# i=2, 2+1=3
# i=3, 3+1=4
# i=4, 4+1=5
# i=5, 5+1=6

# fact = fact * i , fact is initialized to 1
    # i = 1: fact = 1 * 1 = 1
    # i = 2: fcat = 1 * 2 = 2
    # i = 3: fact = 2 * 3 = 6
    # i = 4: fact = 6 * 4 = 24
    # i = 5: fact = 24 * 5 = 120