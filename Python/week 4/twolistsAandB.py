# You are using Python
n=int(input())
list_a=[int(i) for i in input().split()]
list_b=[int(i) for i in input().split()]
result_list=list(zip(list_a,list_b))
for i in range(n):
    result_list[i]=sum(result_list[i])
for num in result_list:
    print(num,end=" ")
