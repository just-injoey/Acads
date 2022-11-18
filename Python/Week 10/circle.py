class Circle():
    def __init__(self, r):
        self.pi = 3.14
        self.r = r
    def area(self):
        return self.pi*self.r*self.r
    def perimeter(self):
        return 2*self.pi*self.r
r = float(input())
c = Circle(r)
print(c.area())
print(c.perimeter())
