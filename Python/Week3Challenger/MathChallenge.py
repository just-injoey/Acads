# You are using Python
s = int(input())
n = int(input())
count = 0
num = 1
for i in range(1,n+1):
    for j in range(i,n+s):
        if (j%num==0):
            num+=1
        else:
            break
    if s==num-1:
        count+=1
    num=1
print(count)
