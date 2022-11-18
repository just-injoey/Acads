from heapq import nlargest
from operator import itemgetter

#number of items
n = int(input())

#Creating empty list for items and prices
item_names = []
prices = []

#getting user input
for i in range(n):
    input_list = input().split()
    item_names.append(input_list[0])
    prices.append(float(input_list[1]))


#Creating Dictionary
item_dict = {item_names[i]: prices[i] for i in range(len(item_names))}

#Getting 3 highest price items
for name, value in nlargest(1, item_dict.items(), key = itemgetter(1)):
    print(name, value)
