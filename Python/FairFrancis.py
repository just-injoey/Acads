n = int(input())
arr = [int(i) for i in input().split()][:n]
count = 0
avg = sum(arr)//n
for i in range(0,n):
    if avg>arr[i]:
        count+=avg-arr[i]
rem =sum(arr)-(avg*n)
print(rem,count)
