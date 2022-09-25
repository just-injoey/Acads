
Write a program to obtain the radius of the circle as a parameter and use three different functions to find the diameter, circumference, and area of the circle. Each function should return the respective values.
Input format

The input consists of the radius of the circle.
Output format

The output prints the diameter, circumference, and diameter.

Round off the output to two decimal places.

Refer sample input and output.
def circle(r):
    d = r*2
    c = 2*3.14*r
    a = 3.14*r*r
    
    print("Diameter of a circle = %.2f"%d)
    print("Circumference of a circle = %.2f"%c)
    print("Area of a circle = %.2f"%a)

r = float(input())
circle(r)
