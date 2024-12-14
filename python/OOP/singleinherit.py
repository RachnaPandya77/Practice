class emp:
    empid:int
    empnm:str

    def getdata(self):
        self.empid=input("Enter ID: ")
        self.empnm=input("Enter name: ")

class hr(emp):
    def printdata(self):
        print("ID: ",self.empid)
        print("NAme: ",self.empnm)

emphr=hr()
emphr.getdata()
emphr.printdata()