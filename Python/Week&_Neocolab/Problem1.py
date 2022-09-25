# # You are using Python
# Write a program to perform the following using recursive functions.

# a)Fibonacci of a series

# b)Factorial of a given number n
# Input format

# The first line of the input consists of the value of n for the Fibonacci series.

# The next line of the input is to find the factorial value.
# Output format

# The output prints the Fibonacci series.

# Then the factorial of the given number.

# Refer sample input and output for formatting specifications.

def Fib(n):
    if(n<0):
        print("Please enter a positive integer")
        return
    print("Fibonacci sequence: ")
    if(n<=1):
        print(0)
        return
        
    count = 0
    a = 0
    b = 1
    print(a)
    print(b)
    while(count < n-2):
        c = a+b
        a = b
        b = c
        print(c)
        count += 1

def Fact(n):
    if(n<0):
        print("Sorry, factorial does not exist for negative numbers")
        return
    ans = 1
    for i in range(1,n+1):
        ans *= i
    print(f"The factorial of {num2} is {ans}")
    
num1 = int(input())
num2 = int(input())
Fib(num1)
Fact(num2)
