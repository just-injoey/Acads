# You are using Python
L = [(), (), ('',), ('a', 'b'), ('a', 'b', 'c'), ('d')]
result_list=[]
for element in L:
     if type(element) == tuple and len(element)==0:
         continue
     else:
         result_list.append(element)
L=result_list
print(L)
