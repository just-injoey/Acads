n=int(input())
List1=list(map(int,input().split()))
List2=list(map(int,input().split()))
for i in range(n):
    print(List1[i]+List2[i],end=' ')
