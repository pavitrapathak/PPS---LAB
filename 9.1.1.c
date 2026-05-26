 # Read input
text = input()

# Define vowels
vowels = "aeiouAEIOU"

# Count vowels
count = 0
for char in text:
    if char in vowels:
        count += 1

# Print result
print(count)
