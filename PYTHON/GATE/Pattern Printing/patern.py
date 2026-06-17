n = int(input("ENter Value: "))

count = 1
for i in range(1,n+1):
    for j in range(1,2*n):

        if i == n:
            print(i,end=' ')
        elif j == n-i+1 or j == n+i-1:
            print(i,end=' ')
        else:
            print(" ",end=' ')
        
    

    print("\n")
