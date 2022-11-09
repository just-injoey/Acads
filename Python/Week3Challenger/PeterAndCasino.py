# You are using Python
n = int(input())
m1=int(input())
m2=int(input())
m3=int(input())
p=0
if m1>=25:
        n=n+20*(m1//25)
        m1=m1%25
if m2>=120:
        n=n+80*(m2//120)
        m2=m2%120
if m3>=12:
        n=n+8*(m3//12)
        m3=m3%12
while(n>0):
    m1+=1
    n-=1
    p+=1
    if m1>=25:
        n=n+20*(m1//25)
        m1=m1%25
    if n>0:
        m2+=1
        n-=1
        p+=1
    else:
        break
    if m2>=120:
        n=n+80*(m2//120)
        m2=m2%120
    if n>0:
        m3+=1
        n-=1
        p+=1
    else:
        break
    if m3>=12:
        n=n+8*(m3//12)
        m3=m3%12
print(""+str(p)+" times")
