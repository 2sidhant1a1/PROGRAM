def Sum(num):
    sum = 0
    while(num != 0):
        sum += (num%10)**2
        num = num//10
    return sum 

n = int(input())

while(n > 9):
    n = Sum(n)

if n == 1:
    print("Yes")
else:
    print("No")