n = int(input())

for i in range(1,(n//2)+2):
    for j in range(1,n+1):
        if j == (i*2)-1:
            print("*",end=' ')
            break
        elif i == ((n)//2)+1 and j == 1:
            print("*",end=' ')
        else:
            print(" ",end=' ')
    print()
for i in range(n//2,0,-1):
    for j in range(1,n):
        if j == (i*2)-1:
            print("*",end=' ')
            break
        else:
            print(" ",end=' ')
    print()
        