import bms 

def display_menu():
    print("\n--- Bank Management System ---")
    print("1. Banker Menu")
    print("2. Customer Menu")
    print("3. Exit")
    return input("Select an option: ")

while True:
    choice = display_menu()
    if choice == '1':
        bms.banker_menu()
    elif choice == '2':
        bms.customer_menu()
    elif choice == '3':
        print("Thank you for using the Bank Management System.")
        break
    else:
        print("Invalid option. Please try again.")
