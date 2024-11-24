products = {}

def addproduct(pid, name, price, quantity):
    products[pid] = {'name': name, 'price': price, 'quantity': quantity}
    print(f"Product added: {products[pid]}") 


def updateproduct(pid, name, price, quantity):
    if pid in products:
        if name: products[pid]['name'] = name
        if name: products[pid]['price'] = price
        if name: products[pid]['quantity'] = quantity
        print(f"Product updated: {products[pid]}") 


def deleteproduct(pid):
    if pid in products:
        print(f"Product deleted: {products[pid]}")  
        del products[pid]

def viewproducts():
    print(f"Viewing products: {products}")  
    return products





    
    
