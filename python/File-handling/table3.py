
def write_table(table_number):
    file_name = "table3.txt"
    with open(file_name, 'w') as file:
        file.write(f'\ntable of {table_number}\n')
        for i in range(1, 11):
            file.write(f"{table_number} * {i} = {table_number * i}\n")


table_number = int(input("Enter the table number: "))


write_table(table_number)