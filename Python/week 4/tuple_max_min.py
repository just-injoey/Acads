# You are using Python
numbers_list=[]
while True:
    numbers_list.append(int(input()))
    num=int(input())
    if num==0:
        break
numbers_tuple = tuple(numbers_list)
max_num=max(numbers_tuple)
min_num=min(numbers_tuple)
print(f"The elements in the tuple are: {numbers_tuple}")
print(f"The length of the tuple: {len(numbers_tuple)}")
print(f"The Maximum number is:",max_num)
print(f"The Minimum number is:",min_num)
