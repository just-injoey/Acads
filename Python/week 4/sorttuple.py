# You are using Python
n=int(input())
numbers_list=[]
for i in range(n):
    numbers_list.append(int(input()))
key=int(input())
if key in numbers_list:
    print("The element is present in the list")
else:
    print("The element is not present in the list")
numbers_tuple=tuple(numbers_list)
print(f"The elements in the tuple are: {numbers_tuple}")
print(f"The sorted elements of thetuple are: {sorted(numbers_list)}")
