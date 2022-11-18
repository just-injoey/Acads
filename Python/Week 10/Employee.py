# You are using Python
class Employee():
    def __init__(self,fn,ln):
        self.fn = fn
        self.ln = ln
    def display(self):
        print(f"{self.fn}.{self.ln}@company.com")
    


fn = input()
ln = input()
obj = Employee(fn,ln)
obj.display()
