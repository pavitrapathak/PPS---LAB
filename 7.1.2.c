from itertools import permutations

# Input three digits
a, b, c = input().split()

# Generate all 3-length permutations
for p in permutations([a, b, c], 3):
    # Join tuple to form a string number
    print("".join(p)) 
