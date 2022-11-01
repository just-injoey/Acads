# You are using Python
n=int(input())
k=int(input())
numbers_list=[]
for i in range(n):
    numbers_list.append(int(input()))
numbers_list.sort()
print(numbers_list[k-1])
