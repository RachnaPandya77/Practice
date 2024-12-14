# fun overloading

class test:
    def displayinfo(self,name=''):
        print("This is function overloading ",name)

    def displayinfo(self,sub=''):
        print("subject: ",sub)

obj1 = test()
obj1.displayinfo()

# pass arg
obj1.displayinfo('python')

obj1.displayinfo('c++')


