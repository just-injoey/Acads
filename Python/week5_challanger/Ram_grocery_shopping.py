x=int(input())
listofd=[]
total=0
for i in range(x):
    y={}
    x=list(map(str,input().split(" ")))
    x[1]=float(x[1])
    x[2]=float(x[2])
    y["product"]=x[0]
    y["quantity"]=x[1]
    y["price"]=x[2]
    total+=x[1]*x[2]
    listofd.append(y)
print(total)
