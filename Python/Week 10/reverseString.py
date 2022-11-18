# You are using Python
class python_string():
    def __init__(self,st):
        self.str = st 
    def reverse_words(self):
        lst = (self.str).split()
        print(*lst[::-1])
    
    
st = input()
obj1 = python_string(st)
obj1.reverse_words()
