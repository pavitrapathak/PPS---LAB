# Take input from the user
input_string = input()

# Initialize an empty string to store the result
result = ""

# Loop through each character in the input string
for char in input_string:
    # Keep letters, digits, and spaces only
    if char.isalnum() or char.isspace():
        result += char

# Print the resulting string
print(result) 
