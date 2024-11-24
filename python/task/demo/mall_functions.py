from main import *

def add_product():
    product_id = int(input("Enter product ID: "))
    product_name = input("Enter product name: ")
    product_price = float(input("Enter product price: "))
    product_quantity = int(input("Enter product quantity: "))
    products.append((product_id, product_name, product_price, product_quantity))
    print("Product added successfully!")

def update_product():
    product_id = int(input("Enter product ID to update: "))
    for i in range(len(products)):
        if products[i][0] == product_id:
            new_name = input("Enter new name: ")
            new_price = float(input("Enter new price: "))
            new_quantity = int(input("Enter new quantity: "))
            products[i] = (product_id, new_name, new_price, new_quantity)
            print("Product updated successfully!")
            return
    print("Product not found!")

def delete_product():
    product_id = int(input("Enter product ID to delete: "))
    for i, product in enumerate(products):
        if product[0] == product_id:
            del products[i]
            print("Product deleted successfully!")
            return
    print("Product not found!")

def buy_product():
    product_id = int(input("Enter product ID to buy: "))
    for product in products:
        if product[0] == product_id:
            quantity = int(input("Enter quantity to buy: "))
            if quantity <= product[3]:
                print(f"You bought {quantity} {product[1]} for {quantity * product[2]} rupees.")
                product[3] -= quantity
            else:
                print("Insufficient stock!")
            return
    print("Product not found!")

def billing():
    total_bill = 0
    for product in products:
        if product[3] > 0:
            print(f"{product[1]} - {product[3]} pieces - {product[3] * product[2]} rupees")
            total_bill += product[3] * product[2]
    print(f"Total bill: {total_bill} rupees")