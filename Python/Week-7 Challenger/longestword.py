# Write a program to define a function find_longest_word which accepts a list of words and returns the longest word in the list with its length.
s=str(input())
long=max(s.split(),key=len)
print("Longest word:",long)
print("Length of the longest word:",len(long))
