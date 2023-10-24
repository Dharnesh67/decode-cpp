class restaurant():
    def __init__(self,name,type):
        self.name=name
        self.type=type
    def describe_restaurant(self) :
        print(self.name.title())
        print(self.type.title())
        pass
    def open_restaurant(self):
        print("restaurant is open") 
        pass

restaurant1 =restaurant(input("enter name of restaurant"),input("enter the type of restaurant"))
print(restaurant1.describe_restaurant())
print(restaurant1.open_restaurant())

