n = int(input())
nu = 2*n-1
nn = n
for i in range(1,n+1):
    for j in range(1,nu+1):
        if(i==1):
            print("*",end="")
        elif (j<i)or(j>nu-i+1):
            print("b",end="")
        elif (j==i) or (j==nu-i+1):
            print("*",end="")
        else:
            print("i",end="")
    print()
