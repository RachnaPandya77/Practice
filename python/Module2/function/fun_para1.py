# function with parameter

def food(fruits, veggies):
    print("Fruit name : ", fruits)
    print("veggies name :", veggies)

for i in range(3):
    fruits = input("Enter fruit name: ")
    veggies = input("Enter vegetables name : ")

food(fruits,veggies)

# this code only print last value
# here's solution , use append

print("--------------------------------------")
def beverages(cold, hot):
    print("cold drink : ", cold)
    print("hot drink :", hot)

bev_data = []
for i in range(3):
    cold = input("Enter items: ")
    hot = input("Enter items: ")
    bev_data.append((cold, hot))

for cold, hot in bev_data:
    beverages(cold,hot)
    






