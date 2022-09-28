# You are using Python

# Write a python function program to calculate power of a number raised to other. E.g.- ab using recursion.
# Input format

# First line of the input represent integer a.

# Second line of the input represent integer b.
# Output format

# Output prints the power of number.

a = int(input())
b = int(input())

def power(a,b):
    if(b != 0):
        return (a*power(a,b-1))
    else:
        return 1

print(power(a,b))
