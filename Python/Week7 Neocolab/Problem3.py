
# Write a Python function to reverse words in a string.

# Call the function in the main program along with the given input to get the output.
# Input format

# Input consist of a sentence.
# Output format

# Output displays the reversed words in string.

def revWords(string):
    string = string.split()
    string = string[::-1]
    string = " ".join(string)
    print(string)
    
    
string = input()
revWords(string)
