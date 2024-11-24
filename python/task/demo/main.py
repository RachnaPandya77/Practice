import mall_functions as mc

def main():
    role = input("Are you a Manager (1) or Customer (2)? (3 to exit): ")
    
    if role == '1':  # Manager
        action = input("Add (1), Update (2), Delete (3), View (4): ")
        
        if action == '1':  # Add
            pid = input("Product ID: ")
            name = input("Name: ")
            price = float(input("Price: "))
            qty = int(input("Quantity: "))
            mc.add_product(pid, name, price, qty)
            print("Product added successfully.")
        elif action == '2':  # Update
            pid = input("Product ID to update: ")
            name = input("New Name (or skip): ")
            price = input("New Price (or skip): ")
            qty = input("New Quantity (or skip): ")
            mc.update_product(pid, name or None, float(price) if price else None, int(qty) if qty else None)
            print("Product updated successfully.")
        elif action == '3':  # Delete
            pid = input("Product ID to delete: ")
            mc.delete_product(pid)
            print("Product deleted successfully.")
        elif action == '4':  # View
            print("Current Products:")
            print(mc.view_products())
        else:
            print("Invalid action selected.")

    elif role == '2':  # Customer
        action = input("View (1), Buy (2): ")
        
        if action == '1':  # View
            print("Available Products:")
            print(mc.view_products())
        elif action == '2':  # Buy
            pid = input("Product ID: ")
            qty = int(input("Quantity: "))
            cost = mc.purchase_product(pid, qty)
            if cost:
                print(f"Total cost: {cost}")
            else:
                print("Purchase failed. Check product ID or stock.")
        else:
            print("Invalid action selected.")
    
    elif role == '3':  # Exit
        print("Goodbye!")
    else:
        print("Invalid role selected.")

# Run the program
main()
