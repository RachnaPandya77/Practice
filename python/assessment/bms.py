customers = {}  # Dictionary to store customer data

# Function to add a new customer
def add_customer():
    customer_id = input("Enter Customer ID: ")
    if customer_id in customers:
        print("Customer already exists.")
    else:
        name = input("Enter Customer Name: ")
        balance = float(input("Enter Initial Balance: "))
        customers[customer_id] = {'name': name, 'balance': balance}
        print("Customer added successfully.")

# Function to view a specific customer
def view_customer():
    customer_id = input("Enter Customer ID: ")
    if customer_id in customers:
        print(f"ID: {customer_id}, Name: {customers[customer_id]['name']}, Balance: {customers[customer_id]['balance']}")
    else:
        print("Customer not found.")

# Function to view all customers
def view_all_customers():
    if not customers:
        print("No customers found.")
    else:
        for customer_id, details in customers.items():
            print(f"ID: {customer_id}, Name: {details['name']}, Balance: {details['balance']}")

# Function to calculate total balance in the bank
def total_bank_balance():
    total = sum(details['balance'] for details in customers.values())
    print(f"Total Balance in Bank: {total}")

# Banker Menu
def banker_menu():
    while True:
        print("\n--- Banker Menu ---")
        print("1. Add Customer")
        print("2. View Customer")
        print("3. View All Customers")
        print("4. View Total Bank Balance")
        print("5. Back to Main Menu")
        choice = input("Select an option: ")

        if choice == '1':
            add_customer()
        elif choice == '2':
            view_customer()
        elif choice == '3':
            view_all_customers()
        elif choice == '4':
            total_bank_balance()
        elif choice == '5':
            break
        else:
            print("Invalid option. Please try again.")

# Function to deposit money
def deposit_money():
    customer_id = input("Enter Customer ID: ")
    if customer_id in customers:
        amount = float(input("Enter Deposit Amount: "))
        customers[customer_id]['balance'] += amount
        print("Amount deposited successfully.")
    else:
        print("Customer not found.")

# Function to withdraw money
def withdraw_money():
    customer_id = input("Enter Customer ID: ")
    if customer_id in customers:
        amount = float(input("Enter Withdrawal Amount: "))
        if customers[customer_id]['balance'] >= amount:
            customers[customer_id]['balance'] -= amount
            print("Amount withdrawn successfully.")
        else:
            print("Insufficient balance.")
    else:
        print("Customer not found.")

# Customer Menu
def customer_menu():
    while True:
        print("\n--- Customer Menu ---")
        print("1. View Balance")
        print("2. Deposit Money")
        print("3. Withdraw Money")
        print("4. Back to Main Menu")
        choice = input("Select an option: ")

        if choice == '1':
            view_customer()
        elif choice == '2':
            deposit_money()
        elif choice == '3':
            withdraw_money()
        elif choice == '4':
            break
        else:
            print("Invalid option. Please try again.")
