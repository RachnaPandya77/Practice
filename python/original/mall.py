products = {}

def addproduct(pid, name, price, quantity):
    products[pid] = {'name': name, 'price': price, 'quantity': quantity}


def updateproduct(pid, name, price, quantity):
    if pid in products:
        if name: products[pid]['name'] = name
        if name: products[pid]['price'] = price
        if name: products[pid]['quantity'] = quantity


def deleteproduct(pid):
    if pid in products:
        del products[pid]

def viewproducts():
    return products





    
    
