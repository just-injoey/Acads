# You are using Python
x=set(map(int,input().split()))
y=set(map(int,input().split()))
count=-1
for i in x:
    count+=1
    if(count==len(x)-1):
        x.remove(i)
        break

z=x.union(y)
print(sorted(z))
    
    
