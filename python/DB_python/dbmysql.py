import pymysql

try:
    db = pymysql.connect(host = 'localhost', user = 'root', password = '', database ='mydb')
    print('Database connected')

except Exception as e:
    print(e)
cr = db.cursor()

"""create_table = "create table empinfo(id integer primary key auto_increment, name varchar(20), city varchar(20))"
cr.execute(create_table)"""

print("\nMenu:")
print("1. Insert")
print("2. Select")
print("3. Update")
print("4. Delete")
print("5. Exit")

choice = input("Enter your choice: ")

if choice == "1":
        table_name = input("Enter table name: ")
        columns = input("Enter column name: ")
        values = input("Enter values: ")

        query = f"INSERT INTO {table_name} ({columns}) VALUES ({values})"

        try:
            cr.execute(query)
            db.commit()
            print("Record inserted")
        except Exception as e:
            print(e)