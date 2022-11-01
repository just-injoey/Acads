# You are using Python
def func(item):
    return item[1]
var_tuple=(('Collections', 5), ('is', 10), ('a', 15), ('Towncity', 20), ('for', 24), ('Coimbatore', 28))
var_list=list(var_tuple)
var_list.sort(key=func)
print(var_list)
