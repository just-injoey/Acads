# You are using Python
n=str(input())
count=0
string_list=input().split()
for string in string_list:
    if len(string) >=2 and string[0]==string[len(string)-1]:
        count+=1
print(count)
