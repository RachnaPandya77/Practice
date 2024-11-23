# A dictionary to hold customer data in memory
customers = {}

def add_customer(name, balance):
    """Add a new customer."""
    if name in customers:
        print("Customer already exists!")
    else:
        customers[name] = {"balance": balance}
        print("Customer added successfully.")

def view_all_customers():
    """View all customers."""
    if not customers:
        print("No customers found.")
    else:
        print("\n--- All Customers ---")
        for name, details in customers.items():
            print(f"Name: {name}, Balance: {details['balance']}")

def search_customer(name):
    """Search for a customer."""
    if name in customers:
        print(f"Name: {name}, Balance: {customers[name]['balance']}")
    else:
        print("Customer not found.")

def total_amount():
    """Calculate the total amount in the bank."""
    total = sum(customer["balance"] for customer in customers.values())
    print(f"Total amount in the bank: {total}")
