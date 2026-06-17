def Decimal(num,l):
    if(num < 2):
        l.append(num)
    else:
        count = Decimal(int(num/2), l)
        l.append(num%2)

n = int(input())
l = []

Decimal(n,l)
count = 0
j=16
while(len(l) < j):
    print("0",end='')
    j -=1
    count +=1
    if count == 4:
        print(" ",end='')
        count = 0

for i in range(0,len(l)):
    print(l[i],end='')
    count += 1
    if count == 4:
        print(" ",end='')
        count = 0
