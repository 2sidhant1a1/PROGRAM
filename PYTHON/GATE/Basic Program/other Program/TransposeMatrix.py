matrix1 = []

# Getting matrix dimensions
row = int(input("Enter Rows of Matrix: "))
column = int(input("Enter Columns of Matrix: "))

# Initializing matrix1
for i in range(row):
    matrix1.append([])
    for j in range(column):
        matrix1[i].append(int(input(f"Enter value for Matrix 1 [{i}][{j}]: ")))

# Displaying the given matrix
print("\nGiven Matrix:")
for i in range(row):
    for j in range(column):
        print(matrix1[i][j], end=" ")
    print()

# Initializing the transposed matrix correctly
Trans_Matrix = [[0 for _ in range(row)] for _ in range(column)]

# Performing the matrix transposition
for i in range(column):
    for j in range(row):
        Trans_Matrix[i][j] = matrix1[j][i]

# Displaying the transposed matrix
print("\nTransposed Matrix:")
for i in range(column):
    for j in range(row):
        print(Trans_Matrix[i][j], end=" ")
    print()