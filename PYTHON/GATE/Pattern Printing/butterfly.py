n = int(input())

for i in range(n):
    for j in range(n*2 - 1):
        if j <= i or (n*2-2)-i <= j:
            print("*",end=' ')
        else:
            print(" ",end=' ')
    print()

for i in range(n-1,0,-1):
    for j in range(n*2 - 1):
        if j < i or (n*2-2)-i < j:
            print("*",end=' ')
        else:
            print(" ",end=' ')
    print()