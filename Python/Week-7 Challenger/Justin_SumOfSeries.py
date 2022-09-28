# You are using Python
def findSum(n):
    sum = 0
    for i in range(0,n+1):
        sum += 2**i
    return sum
    
n = int(input())
print(findSum(n))
    
