file = open('table.txt','w')
file.write('\ntable of 5\n')

for i in range(1,11):
    file.write(f"5 * {i} = {5 * i}\n")

file.write("\n----------------------------------------")

file.write('\ntable of 10\n')

for i in range(1,11):
    file.write(f"10 * {i} = {10 * i}\n")






