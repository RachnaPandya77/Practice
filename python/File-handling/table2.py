file = open('table1.txt', 'w')

t = int(input("enter table: "))
for i in range(t):
    m = int(input("no of table: "))
    for j in range(1,11):
            n = j * m
            file.write(f"{m}*{j}=={n}\n")

