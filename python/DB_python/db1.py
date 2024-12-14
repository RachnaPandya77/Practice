import sqlite3

try:
    db = sqlite3.connect('emp.db')
    print("Database connected")
except Exception as e:
    print(e)

#create
Ctbl = "create table empinfo(id integer primary key autoincrement, name text, city text)"
try:
    db.execute(Ctbl)
    print("Table created")
except Exception as e:
    print(e)

"""#insert
insert_data = "insert into empinfo(name, city)values('Rachna','Rajkot'),('Ruchi','Jetpur'),('Het','Surat'),('RJ','Ahmedabad')"
try:
    db.execute(insert_data)
    db.commit()
    print("record inserted")
except Exception as e:
    print(e)

#update
update_d = "update empinfo set city = 'jetpur' where id = 1" 
try:
    db.execute(update_d)
    db.commit()
    print("record updated")
except Exception as e:
    print(e)

# delete
del_data = "delete from empinfo where city = 'jetpur'"
try:
    db.execute(del_data)
    db.commit()
    print("record deleted")
except Exception as e:
    print(e)"""

#fetch
cr = db.cursor()
show_data = "select * from empinfo"

try:
    cr.execute(show_data)
    data = cr.fetchall()

    for i in data:
        print(i)
except Exception as e:
    print(e)