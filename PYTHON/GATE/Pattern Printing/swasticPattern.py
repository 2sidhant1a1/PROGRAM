num = int(input())

n = num-1 if (num%2 ==0) else num

for i in range(n):
    for j in range(n):
        if j == n//2 or i == n//2:
            print(" *",end='  ')
        elif i < n//2 and (j == 0):
            print(" *",end='  ')
        elif i == 0 and j > n//2:
            print(" *",end='  ')
        elif i > n//2 and (j == n-1):
            print(" *",end='  ')
        elif i == n-1 and (j < n//2):
            print(" *",end='  ')
        else:
            print("  ",end='  ')
    print("\n")