# Take input from the user
input_string = input().strip()

# Reverse the string
reversed_string = input_string[::-1]

# Check if the original string is equal to the reversed string
if input_string == reversed_string:
    print("Palindrome")
else:
    print("Not a Palindrome") 
