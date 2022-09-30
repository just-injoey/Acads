# You are using Python
n = int(input())

for i in range(n):
    if(i==n-1):
        for j in range(2*n-1):
            print("*",end="")
        break
    count = 0
    for j in range(n-1-i):
        count+=1
        print('b',end="")
    print("*",end="")
    if(i>0):
        for j in range(2*i-1):
            print('i',end="")
        print("*",end="")
    while(count>0):
        print("b",end="")
        count-=1
    print("")
