# Write a function to check whether a number is perfect or not. In number theory, a perfect number is a positive integer that is equal to the sum of its proper positive divisors, that is, the sum of its positive divisors excluding the number itself (also known as its aliquot sum). Equivalently, a perfect number is a number that is half the sum of all of its positive divisors (including itself).


# Example : The first perfect number is 6, because 1, 2, and 3 are its proper positive divisors, and 1 + 2 + 3 = 6. Equivalently, the number 6 is equal to half the sum of all its positive divisors: ( 1 + 2 + 3 + 6 ) / 2 = 6. The next perfect number is 28 = 1 + 

def isPerfect(n):
    lst =[]
    for i in range(1, (n//2)+1):
        if(n%i==0):
            lst.append(i)
    
    sum1 = 0
    for i in lst:
        sum1 += i
    if(sum1 != n):
        return 0
    
    sum2 = (sum1+n)//2
    if(sum2 != n):
        return 0
    return 1
    
n = int(input())

str1 = f"{n} is a perfect number"
str2 = f"{n} is not a perfect number"
print(str1) if(isPerfect(n)==1) else print(str2)
