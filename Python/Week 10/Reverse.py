# You are using Python
class Reverse():
    def __init__(self, st):
        self.st= st;
    def rev(self):
        print(self.st[::-1])
    
st = input()
r = Reverse(st)
r.rev()
