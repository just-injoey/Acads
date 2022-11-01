# You are using Python
n=int(input())
numbers_list=[]
for i in range(n):
    numbers_list.append(int(input()))
result_list=[]
for num in numbers_list:
    if num not in result_list:
        result_list.append(num)
        
print(result_list)
