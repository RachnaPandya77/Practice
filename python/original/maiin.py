import mall as m

def main():
    role = input(" Manager (1) or Customer (2): ")
    
    if role == '1':  # Manager
        action = input("(1) Add , (2) Update , (3) Delete , (4) View : ")
        
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

            m.updateproduct(pid, name , int(price) , int(qty))
           
        elif action == '3':  # Delete
            pid = input("Product ID to delete: ")
            m.deleteproduct(pid)

        elif action == '4':  # View
            print("Current Products:")
            print(m.viewproducts())
           
        else:
            print("Invalid action")

    else:
        print("Invalid role")

    

# Run the program
main()
