n=int(input())
d1=8
d2=6
s1=30
s2=35
print(s1,s2,end=' ')
for i in range(2,n):
    if(i%2==0):
        s1+=d1
        d1+=8
        print(s1,end=' ')
    else:
        s2+=d2
        d2+=6
        print(s2,end=' ')
        
