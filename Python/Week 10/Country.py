# You are using Python
class Country():
    def __init__(self, n, cc, isd):
        self.name = n;
        self.countryCode = cc
        self.isdCode = isd
    def display(self):
        print(f"Country Name: {self.name}",)
        print(f"Country Code: {self.countryCode}")
        print(f"ISD Code: {self.isdCode}")


n = input()
cc = input()
isd = input()

obj = Country(n,cc,isd)
obj.display()
