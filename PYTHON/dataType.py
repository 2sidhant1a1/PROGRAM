n = int(input("Enter the value of n: "))
for i in range(n):
    for j in range(i):
        print('  ',end='')
    for i in range(2*(n-i)):
        print(" *",end='')
    print()