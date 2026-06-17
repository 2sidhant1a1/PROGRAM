matrix1 = []
matrix2 = []

# Getting matrix 1 dimensions
row = int(input("Enter Row Matrix 1: "))
column = int(input("Enter Column Matrix 1: "))

# Initializing matrix1
for i in range(row):
    matrix1.append([])
    for j in range(column):
        matrix1[i].append(int(input("Enter value for Matrix 1 [{i}][{j}]: ")))

# Getting matrix 2 dimensions
row2 = int(input("Enter Row Matrix 2: "))
column2 = int(input("Enter Column Matrix 2: "))

# Initializing matrix2
for i in range(row2):
    matrix2.append([])
    for j in range(column2):
        matrix2[i].append(int(input("Enter value for Matrix 2 [{i}][{j}]: ")))
 
# Ensure both matrices have the same dimensions
if row != row2 or column != column2:
    print("Error: Matrices must have the same dimensions for addition.")
else:
    # Initializing sum matrix
    add = [[0 for _ in range(column)] for _ in range(row)]

    # Performing matrix addition
    for i in range(row):
        for j in range(column):
            add[i][j] = matrix1[i][j] + matrix2[i][j]

    # Displaying the resultant matrix
    print("\nResultant Matrix:")
    for i in range(row):
        for j in range(column):
            print(add[i][j], end=" ")
        print()