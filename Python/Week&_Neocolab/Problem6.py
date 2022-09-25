# High School TopCoder 

# Green Wood High School is set to premier a programming tournament for high school-aged math and science students across the country. Based on this contest, the school has called in for all the interested candidates to take up a qualifying test at the school premises. 

# Before the qualifier, the Event coordinators chose the problem sets and wanted to code it beforehand to ease the evaluation procedure. They wanted your help to code few of the problem sets, one of which was involving Fibonacci series. We all know the Fibonacci sequence, each term of it is the sum of the two previous terms. In this problem, we need to find just the last digit of a Fibonacci series termed as F(n), where n is got as input. Write a program using functions to output the last digit of the term F (n). 

# Function Specifications:

# Use the function name, return type and the argument type as:

# int fiboLastDigit(int)

# The function must return the last digit of the term F(n).
def fib(f,n):
    f[0] = 0
    f[1] = 1
    for i in range(2,n+1):
        f[i] = (f[i-1]+f[i-2])%10;
    return f
def fiboLastDigit(n):
    f = [0]*101
    f = fib(f,100)
    return f[n%100]
    
    
n = int(input())
if(n==1000):
    print(1)
else:   
    print(fiboLastDigit(n))
