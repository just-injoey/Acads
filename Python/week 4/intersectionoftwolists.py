# You are using Python
n=int(input())
list_1=[]
list_2=[]
for i in range(n):
    list_1.append(int(input()))
for i in range(n):
    list_2.append(int(input()))
list_3=[]
for num in list_1:
    if num in list_2 and num not in list_3:
        list_3.append(num)
print(list_3)
