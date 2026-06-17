n = int(input("Enter number of time : "))
count = 0
sym = input("Enter symbol: ")


for i in range(n):
    for j in range(n-i):
        
        if i%2 == 0:
            print(sym,end='  ')
        else:
            print(count,end='  ')

    print("\n")
    if i%2 != 0:
        count += 1


    