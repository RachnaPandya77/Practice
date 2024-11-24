# manager_customer.py

products = {}

# Manager Functions
def add_product(product_id, name, price, quantity):
    products[product_id] = {'name': name, 'price': price, 'quantity': quantity}

def update_product(product_id, name=None, price=None, quantity=None):
    if product_id in products:
        if name: products[product_id]['name'] = name
        if price: products[product_id]['price'] = price
        if quantity: products[product_id]['quantity'] = quantity

def delete_product(product_id):
    if product_id in products:
        del products[product_id]

# Customer Functions
def view_products():
    return products

def purchase_product(product_id, quantity):
    if product_id in products and products[product_id]['quantity'] >= quantity:
        products[product_id]['quantity'] -= quantity
        return products[product_id]['price'] * quantity
    return None
