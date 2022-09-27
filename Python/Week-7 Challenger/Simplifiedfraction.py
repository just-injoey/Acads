# You are using Python
M=int(input())
N=int(input())
def hcf(a,b):
    if(a>b):
        temp=b
    elif(a<b):
        temp=a
    for i in range(1,int(temp+1)):
        if(a%i==0 and b%i==0):
            k=i
    return k
def div(m,n):
    if(m==0):
        return 0
    if(n==0):
        return ("ZeroDivisionError: integer division or modulo by zero")
    if(int(m>n) and m%n==0):
        return str(int(m/n))
    elif(m>n and m%n!=0):
        p=hcf(m,n)
        flag=0
        while(p!=1):
            q=(m/p)
            r=(n/p)
            p=hcf(q,r)
            flag=1
        if(flag==1):
            m=q
            n=r
        return (str(int(m/n))+' '+str(int(m%n))+'/'+str(int(n)))
    elif(m<n and n%m==0):
        p=hcf(m,n)
        flag=0
        while(p!=1):
            q=(m/p)
            r=(n/p)
            p=hcf(q,r)
            flag = 1
        if(flag==1):
            m=q
            n=r
        return (str(int(m%n))+'/'+str(int(n)))
    elif(m<n and n%m!=0):
        p=hcf(m,n)
        flag=0
        while(p!=1):
            q=(m/p)
            r=(n/p)
            p=hcf(q,r)
            flag=1
        if(flag==1):
            m=q
            n=r
        return (str(int(m%n))+'/'+str(int(n)))
k=(div(M,N))
print(k)
