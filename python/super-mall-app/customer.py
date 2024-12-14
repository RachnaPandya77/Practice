from manager import product

def buyproduct(product_id):
    if product_id in product:
        print("product avaliable")
    else:
        print("Product not avaliable")
