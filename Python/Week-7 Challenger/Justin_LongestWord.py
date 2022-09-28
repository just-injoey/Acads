# You are using Python
def find_longest_word(s):
    long = max(s.split(), key=len)
    return long
    
s = input()
ans = find_longest_word(s)
print("Longest word: ", ans)
print("Length of the longest word: ", len(ans))
