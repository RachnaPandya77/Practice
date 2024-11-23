def sum(a,b):
    print("sum:",a+b)

def sub(a,b):
    print("sub:",a-b)

def mul(a,b):
    print("mul:",a*b)

def div(a,b):
    print("div:",a/b)

def cal():
    print("1 : sum")
    print("2 : sub")
    print("3 : mul")
    print("4 : div")

choice = input ("Enter choice(1 to 4)")

if choice in ('1', '2', '3', '4'):
    n1 = input("Enter first number: ")
    n2 = input("enter second number: ")

elif choice == 1:
    print("sum: ", sum(n1,n2))

elif choice == 2:
    print("sub: ", sub())

elif choice == 3:
    print("mul: ", mul())

elif choice == 4:
    print("div: ", div())

else:
    print("Enter valid choice")

cal()


