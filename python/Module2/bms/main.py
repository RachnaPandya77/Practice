from bmsA import add_customer, view_all_customers, search_customer, total_amount

def banker_menu():
    while True:
        print("\n--- Banker Menu ---")
        print("1. Add Customer")
        print("2. View All Customers")
        print("3. Search Customer")
        print("4. View Total Amount")
        print("5. Exit")

        choice = input("Enter your choice: ")
        if choice == "1":
            name = input("Enter customer name: ").strip()
            try:
                balance = float(input("Enter initial balance: "))
            except ValueError:
                print("Invalid balance! Please enter a numeric value.")
                continue
            add_customer(name, balance)
        elif choice == "2":
            view_all_customers()
        elif choice == "3":
            name = input("Enter customer name to search: ").strip()
            search_customer(name)
        elif choice == "4":
            total_amount()
        elif choice == "5":
            print("Exiting Banker Menu...")
            break
        else:
            print("Invalid choice. Please try again.")

def main():
    while True:
        print("\n--- Bank Management System ---")
        print("1. Banker Menu")
        print("2. Exit")

        choice = input("Enter your choice: ")
        if choice == "1":
            banker_menu()
        elif choice == "2":
            print("Thank you for using the Bank Management System!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()
