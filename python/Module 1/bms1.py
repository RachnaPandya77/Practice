print("Bank Managment System")

num = int(input("Enter ac_num: "))
name = input("Enter ac_ holder name: ")
actype = input("Enter account type: ")
amount = int(input("Enter amount: "))

def deposite():
    if amount <= 2000:
        print("Min amount : 2000 ")
    else:
        print("Amount deposited successfully")

with_draw = int(input("enter withdrawal amount: "))
def withdraw():
    if with_draw > amount:
        print("insInsufficient Balance")
    else:
        print("Amount Withdraw Successfully")

def details():
    print("Name of Account Holder: ", name)
    print("Account Number: ", num)
    print("Account type: ", actype)
    print("Total amount: ", amount)
    print("with_draw: ", with_draw)
    
deposite()
withdraw()
details()
    
