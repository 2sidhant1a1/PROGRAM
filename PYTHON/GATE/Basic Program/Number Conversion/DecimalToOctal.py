def Decimal(num):
    if(num < 8):
        print(num,end='')
    else:
        Decimal(int(num/8))
        print(num%8,end='')

n = int(input())
Decimal(n)

