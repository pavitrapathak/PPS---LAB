""""num = int(input("Enter a number: "))

# Type Content here...


print("Sum of digits:",     )"""
  # Read input from the user
number = int(input("Enter a number: "))

# Initialize sum variable
digit_sum = 0

# Make a copy of the number to work with
temp = abs(number)  # abs() ensures it works for negative numbers too

# Calculate sum of digits
while temp > 0:
    digit_sum += temp % 10  # get the last digit
    temp //= 10             # remove the last digit

# Print the result
print(f"Sum of digits: {digit_sum}")
