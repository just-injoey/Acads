# You are using Python
n=int(input())
z=30
y=35
if(n==1):
    print(z,end=' ')
elif(n==2):
    print(z,end=' ')
    print(y,end=' ')
else:
    print(z,end=' ')
    print(y,end=' ')
    c=2
    for i in range(1,(n//2)+1):
        
        print(z+8*(i),end=' ')
        c=c+1
        if(c==n):
            break
        print(y+6*(i),end=' ')
        c=c+1
        if(c==n):
            break
        z=z+8*(i)
        y=y+6*(i)
