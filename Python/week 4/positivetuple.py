# You are using Python
n=int(input())
numbers_list=[]
for i in range(n):
    numbers_list.append(int(input()))
numbers_tuple =tuple(numbers_list)
positive_list=[]
for num in numbers_list:
    if num>0:
        positive_list.append(num)
        
positive_tuple=tuple(positive_list)
print(f"The elements in the tuple are: {numbers_tuple}")
print(positive_tuple)
