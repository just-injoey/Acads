# You are using Python
class Rectangle():
    def __init__(self,l,b):
        self.l = l
        self.b = b
    def area(self):
        print(self.l*self.b)
    def perimeter(self):
        print(2*(self.l+self.b))

l = int(input())
b = int(input())
obj = Rectangle(l,b)
obj.area()
obj.perimeter()
