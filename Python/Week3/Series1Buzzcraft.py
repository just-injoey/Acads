# You are using Python

def isPrime(x):
    for i in range(2,int(x**(0.5)+1)):
        if(x%i==0):
            return 0
    return 1

n = int(input())

count =0
i = 2
while(count<n):
    if(isPrime(i)):
        print(i, end=" ")
        count+=1
    i+=1
