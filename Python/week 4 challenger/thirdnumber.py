# You are using Python
n=int(input())
numbers_list=[]
for i in range(n):
    numbers_list.append(int(input()))
position=3-1
idx=0
len_list=len(numbers_list)
while len_list>0:
    idx=(position+idx)%len_list
    print(numbers_list.pop(idx))
    len_list-=1
