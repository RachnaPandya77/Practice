# mall_customer.py

from mall_manager import products

def view_products():
    return products

def purchase_product(product_id, quantity):
    if product_id in products and products[product_id]['quantity'] >= quantity:
        products[product_id]['quantity'] -= quantity
        return products[product_id]['price'] * quantity
    return None
