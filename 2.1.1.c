# Read coefficients a, b, c
a, b, c = map(int, input().split())

# Calculate the discriminant
D = b * b - 4 * a * c

if D > 0:
    # Real and different roots
    root1 = (-b + D ** 0.5) / (2 * a)
    root2 = (-b - D ** 0.5) / (2 * a)
    print(f"root1 = {root1:.2f}")
    print(f"root2 = {root2:.2f}")

elif D == 0:
    # Real and same roots
    root = -b / (2 * a)
    print(f"root1 = root2 = {root:.2f}")

else:
    # Imaginary roots
    real_part = -b / (2 * a)
    imaginary_part = (-D) ** 0.5 / (2 * a)
    print(f"root1 = {real_part:.2f}+{imaginary_part:.2f}i")
    print(f"root2 = {real_part:.2f}-{imaginary_part:.2f}i")

