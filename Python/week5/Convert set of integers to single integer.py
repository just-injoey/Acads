input_list = input().split()
for i in range(0,len(input_list)):
    input_list[i] = int(input_list[i])
str1=set(input_list)
x = int("".join(map(str, input_list)))
print(x)
