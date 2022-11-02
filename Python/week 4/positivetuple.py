n=int(input())
List=[]
for i in range(n):
    List.append(int(input()))
print("The elements in the tuple are: ",tuple(List))
List1=[]
for i in List:
    if(i > 0):
        List1.append(i)
print(tuple(List1))
