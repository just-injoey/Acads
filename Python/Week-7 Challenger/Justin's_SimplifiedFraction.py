# You are using Python
def hcf(a,b):
    if(a>b):
        smaller = a
    else:
        smaller = b
    for i in range(1,int(smaller+1)):
        if(a%i==0 and b%i==0):
            hcf = i
    return hcf
    
def printValue(n,d):
    if(n==0):
        print(0);
        return
    if(d==0):
        print("Zero Division Error: integer divison or modulo by zero")
        return
    if(n>d):
        if(n%d==0):
            print(str(int(n/d)))
            return 
        else: #n%d !=0
            p = n
            q = d
            while(hcf(p,q) != 1):
                k = hcf(p,q)
                p = p/k
                q = q/k
            
            print(str(int(n//d))+' '+str(int(p%q))+'/'+str(int(q)))
            return
    else:
        p = n
        q = d
        while(hcf(p,q) != 1):
            k = hcf(p,q)
            p = p/k
            q = q/k
        print(int(p)+"/"+int(q))
        return

num = int(input())
denom = int(input())
printValue(num,denom)
