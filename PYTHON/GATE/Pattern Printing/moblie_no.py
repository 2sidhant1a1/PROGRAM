l = list()
n = 10
 

for i in range(n):
    l.append(int(input("Enter digit: " )))

for i in range(n+1):
    for j in range(n+1):
        if i == 0 and j==0:
            print("0",end=' ')
        elif i == 0:
            print(l[j-1],end=' ')
        elif j == 0 or i == j:
            print(l[i-1],end=' ')
        else:
            print(" ",end=' ')
    print()

