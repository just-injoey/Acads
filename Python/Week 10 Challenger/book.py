# You are using Python
class Book():
    def __init__(self,t,a):
        self.title = t
        self.author = a
    def get_title(self):
        return f"Title: {self.title}"
    def get_author(self):
        return f"Author: {self.author}"
t = input()
a = input()
obj = Book(t,a)
print(obj.get_title())
print(obj.get_author())
