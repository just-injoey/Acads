# Write a Python function that accepts a string and calculates the number of upper case letters and lower case letters.
# Input format

# The first line of the input consists of strings.
# Output format

# Output prints the number of upper case and lower case.

def caseCounter(string):
    lower = 0
    upper = 0
    for i in string:
        if(i.islower()):
            lower += 1
        if(i.isupper()):
            upper += 1
    print(upper)
    print(lower)

string = input()

caseCounter(string)
