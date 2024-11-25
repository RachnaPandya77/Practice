import mall as m

def main():
    role = input(" 1. Manager  or 2. Customer : ")
    
    if role == '1':  # Manager
        action = input("1. Add , 2. Update , 3. Delete : ")
        
        if action == '1':  # Add
            pid = input("Product ID: ")
            name = input("Name: ")
            price = int(input("Price: "))
            qty = int(input("Quantity: "))

            m.addproduct(pid, name, price, qty)
            
        elif action == '2':  # Update
            pid = input("Product ID  update: ")
            name = input("New Name : ")
            price = input("New Price : ")
            qty = input("New Quantity : ")

            m.updateproduct(pid, name , price ,qty)
           
        elif action == '3':  # Delete
            pid = input("Product ID to delete: ")
            m.deleteproduct(pid)
           
        else:
            print("Invalid action")

    else:
        print("Invalid role")

main()
