import manager
import customer

def main():
        while True:
            print("Super Mall App")
            print("1. manager")
            print("2. customer")
            print("3. Exit")
            choice = input("Enter your choice: ")
            
           
            if choice == "1":
                while True:
                    print("\n")
                    print("-------manager's duty--------")
                    print("1. Add product")
                    print("2. Update product")
                    print("3. Exit")
                    mchoice = input("Enter your choice: ")

                    if mchoice == "1":
                        print("\n")
                        pid = input("Enter product id: ")
                        name = input("Enter pro name: ")
                        price = int(input("Enter pro price: "))
                        manager.addproduct(pid,name,price)

                    elif mchoice == "2":
                        print("\n")
                        pid = input("Enter product id(update): ")
                        name = input("Enter pro name(update): ")
                        price = int(input("Enter product price(update): "))
                        manager.updateproduct(pid,name,price)

                    elif mchoice == "3":
                         break
                    
                    else:
                        print("invalid input")


            elif choice =="2":
                 while True:
                      print("\n")
                      print("-------customer's menu------")
                      print("Buy product")
                      print("Exit")
                      cchoice = input("Enter choice: ")

                      if cchoice == "1":
                           print("\n")
                           pid = input("Enter pro id: ")
                           customer.buyproduct(pid)

                      elif cchoice == "2":
                           break

                      else:
                           print("invalid input")

            elif choice == "3":
                print("\n")
                print("Exit")
            break
                           
main()

                 
