# You are using Python
n=int(input())
dict1={}
dict2={}
dict3={}
arr=[]
for i in range(0,n):
    x,y=input().split(":")
    dict1[x]=y

for i in range(0,n):
    x,y=input().split(":")
    dict2[x]=y

for i in range(0,n):
    x,y=input().split(":")
    dict3[x]=y

dict4 ={**dict1,**dict2,**dict3}
for i in dict4:
    dictele={}
    dictele[i]=dict4[i]
    arr.append(dictele)
print(arr)
    
