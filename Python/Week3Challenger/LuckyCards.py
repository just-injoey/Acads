n = int(input())
arr = []
for i in range(0,n):
    x = int(input())
    if x==1:
        x=14
    arr.append(x)
st=0
a=0
b=0
for i in range(0,n):
    if arr[i]>10:
        for j in range(1,arr[i]%10+1):
            if i+j<n:
                if (arr[j+i]>10):
                    st=1
                    break
            else:
                st=1
                break
        if(st==0):
            if(i%2==0):
                a=a+arr[i]%10
                print("Player A scores "+str(arr[i]%10)+" point(s)")
            else:
                b=b+arr[i]%10
                print("Player B scores "+str(arr[i]%10)+" point(s)")
        st=0
print("Player A: "+str(a)+" point(s)")
print("Player B: "+str(b)+" point(s)")
