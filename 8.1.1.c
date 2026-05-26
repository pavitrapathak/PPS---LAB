 # Input dimension
n = int(input("dimension: "))

# Input first matrix
print("first matrix:")
matrix1 = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix1.append(row)

# Input second matrix
print("second matrix:")
matrix2 = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix2.append(row)

# Initialize resultant matrix with zeros
result = [[0 for _ in range(n)] for _ in range(n)]

# Matrix multiplication
for i in range(n):
    for j in range(n):
        for k in range(n):
            result[i][j] += matrix1[i][k] * matrix2[k][j]

# Print resultant matrix
print("Resultant Matrix:")
for row in result:
    print(" ".join(map(str, row)))
