# You are using Python
class Calculator():
    def __init__(self, num1, num2, ch):
        self.num1 = num1
        self.num2 = num2
        self.cho = ch 
    def choice(self):
        if(self.cho==1):
            k = self.add()
        elif(self.cho==2):
            k = self.sub()
        elif(self.cho==3):
            k = self.mul()
        elif(self.cho==4):
            k = self.div()
        else:
            # print("Invalid choice")
            return "Invalid choice"
        return k
    def add(self):
        summ = self.num1 + self.num2
        return summ
    def sub(self):
        diff = self.num1 - self.num2
        return diff
    def mul(self):
        multi = self.num1*self.num2
        return multi
    def div(self):
        divid = self.num1/self.num2
        return divid
        
        
num1 = int(input())
num2 = int(input())
ch = int(input())
obj = Calculator(num1,num2,ch)
k = obj.choice()
print(k)
    
