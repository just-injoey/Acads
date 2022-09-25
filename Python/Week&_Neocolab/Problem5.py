
# Write a program that accepts a string S, and characters c1, c2. Replace character c1 with c2 and c2 with c1 using map() function.

# Input : S =”callege”

# c1 = ‘a’, c2 = ‘o ‘

# Output : ‘college’
# Input format

# The input consists of a string, c1, and c2 in new lines.
# Output format

# The output prints the final modified string
s = input()
c1 = input()
c2 = input()

def replace(a,c1,c2):
    newChars = map(lambda x: x if(x!=c1 and x!=c2) else\
    c1 if (x==c2) else c2,a)
    
    print(''.join(newChars))

replace(s,c1,c2)
