class empinfo:
    # this is called initi, == kri ne api a initi
    id = 0 
    name = ''

    #this is called declaration
    #id:int
    #name:str

    #above are two type

    def info(self):
        self.id = input("Enter emp id: ")
        self.name = input("Enter emp name: ")

    def printinfo(self):
        print("ID: ",self.id)
        print("Emp nm: ", self.name)

emp = empinfo()
emp.info()
emp.printinfo()