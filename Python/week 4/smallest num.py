n=int(input())
numbers_list=[int(i) for i in input().split()]
for i in range(n):
    min= numbers_list[i]
    flag =0
    for j in range(i,n):
        if numbers_list[j]<min:
           min=numbers_list[j]
           flag = 1
           break
    if(flag==1):
        print(min,end=" ")
    else:
        print("-1",end=" ")
