# Best Programmer 

# Baldwin High School's Best Programmer Contest is organized today and the contest hones the students coding skills by making them solve different challenges. Based on the speed and accuracy with which the students finish the challenges, the Event coordinators will rank the participants and reward them. 

# The entry level challenge was just one problem which the students has to program for. The problem reads like: 

# A positive integer, n, is said to be perfect if the sum of its proper divisors equals the number it

def findType(n):
    lst = []
    for i in range(1, (n//2)+1):
        if(n%i == 0):
            lst.append(i)
    # print(lst)
    
    sum1=0
    for i in lst:
        sum1 +=i
    if(sum1 == n):
       return 0
    if(sum1 <n):
        return 1
    if(sum1>n):
        return -1
    



n = int(input())
ans = findType(n)
if(ans == 0):
    print("Perfect number")
if(ans == -1):
    print("Abundant number")
if(ans == 1):
    print("Deficient number")
