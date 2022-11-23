L=[]
Sum=0
n=int(input())
for i in range(n):
    l=list(map(int,input().split()))
    L.append(l)
    Sum+=sum(L[i])
print(Sum)    
