#Program 1
#WAP to find distance between two coordinate points
import math
a=int(input("Enter x1: "))
b=int(input("Enter x2: "))
c=int(input("Enter y1: "))
d=int(input("Enter y2: "))
if(a==b and c==d):
    print("Distance is 0 units.")
else:
    d=((b-a)**2+(c-d)**2)**0.5
    print("Distance is ",d,"units")
Enter x1: 5
Enter x2: 69
Enter y1: 4
Enter y2: 5
Distance is  64.00781202322104 units
#Program 2
#WAP to input marks from the user, calculate the percentage and display grade according to percentage.
# Percentage >= 90% : Grade A
# Percentage >= 80% : Grade B
# Percentage >= 70% : Grade C
# Percentage >= 60% : Grade D
# Percentage >= 40% : Grade E
# Percentage < 40% : Grade F
    
m=int(input("Enter Maths marks: "))
P=int(input("Enter Physics marks: "))
c=int(input("Enter Chemistry marks: "))
e=int(input("Enter English marks: "))
p=int(((m+P+c+e)/400)*100)
print("Percentage is ",p,"%.",sep='')
if(p>=90):
    print("\nGrade is A.")
elif(p>=80):
    print("\nGrade is B.")
elif(p>=70):
    print("\mGrade is C.")
elif(p>=60):
    print("\nGrade is D.")
elif(p>=40):
    print("\nGrade is E.")
elif(p>40):
    print("\nGrade is F.")
Enter Maths marks: 50
Enter Physics marks: 50
Enter Chemistry marks: 50
Enter English marks: 50
Percentage is 50%

Grade is E.
#Program 3
#WAP to find maximum of three numbers

a=int(input("Enter first number: "))
b=int(input("Enter second number: "))
c=int(input("Enter third number: "))
if(a>b and a>c):
    print(a,"is the largest.")
elif(b>a and b>c):
    print(b,"is the largest.")
else:
    print(c, "is the largest.")
Enter first number: 50
Enter second number: 50
Enter third number: 50
50 is the largest.
#Program 4
#WAP in python that computes the real roots of a quadratic function.

a=int(input("Enter value of a: "))
b=int(input("Enter value of b: "))
c=int(input("Enter value of c: "))
D=(b*b)-(4*a*c)
if(D>0):
    print("The roots are real.")
    r1=(-b+(D)**0.5)/(2*a)
    r2=(-b-(D)**0.5)/(2*a)
    print("Roots of the quadratic equation are  ",r1,"and",r2)
elif(D<0):
    print("Imaginary roots.")
else:
    print("Only one real root.")
    r1=-b/(2*a)
    print(r1,"is the root of the quadratic equation.")
    
Enter value of a: 1
Enter value of b: -7
Enter value of c: 10
The roots are real.
Roots of the quadratic equation are  5.0 and 2.0
#Program 5
#WAP in python to validate a triangle.

a=float(input("Enter first angle: "))
b=float(input("Enter second angle: "))
c=float(input("Enter third angle: "))
if(a+b+c==180.0 and a>0 and b>0 and c>0):
    print("The triangle is valid.")
else:
    print("The triangle is invalid.")
Enter first angle: 60
Enter second angle: -10
Enter third angle: 130
The triangle is invalid.
#Program 6
#WAP to calculate gross salary
# Basic Salary <= 10000 : HRA = 20%, DA = 80%
# Basic Salary <= 20000 : HRA = 25%, DA = 90%
# Basic Salary > 20000 : HRA = 30%, DA = 95%

sal=float(input("Enter salary of the employee: "))
if(sal<=10000):
    print("The gross salary of the employee is Rs.",(sal)+(sal*0.2)+(sal*0.8),sep='')
elif(sal<=20000):
    print("The gross salary of the employee is Rs.",(sal)+(sal*0.2)+(sal*0.8),sep='')
else:
    print("The gross salary of the employee is Rs.",(sal)+(sal*0.3)+(sal*0.95),sep='')  
    
    
Enter salary of the employee: 100000
The gross salary of the employee is Rs.225000.0
#15 WAP to print sum of series 1/1,1/2,1/3,1/4....till 1/n

n=int(input("Enter limit: "))
sum=0
print("Series: ",end='')
for i in range(1,n+1):
    print("1/",i,sep='',end=' ')
    sum+=1/i
    if(i!=n):
        print("+",end=" ")
print("\nSum:",sum)
#Extra
#WAP to check if a number is prime or not
n=int(input("Enter number to check: "))
if(n<2):
    print("Not prime.")
else:
    flag=0
    for i in range(2,n):
        if(n%i==0):
            flag=1
            print("Not Prime")
            break
    if(flag==0):
        print("Prime")
Enter number to check: 56
Not Prime
 
