product = {}

def addproduct(product_id, name, price):
    if product_id in product:
        print(f"product id {product_id} avaliable")
        return
    product[product_id] = {"name":name, "price":price}
    print("Product added")

def updateproduct(product_id, name, price):
    if product_id not in product:
        print(f"product id {product_id} not avaliable")
        return
    product[product_id] = {"name":name, "price":price}
    print("product updated")