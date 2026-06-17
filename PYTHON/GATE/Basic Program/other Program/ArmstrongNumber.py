
n = int(input())

numCount = n
count = 0
while(numCount != 0):
    numCount = numCount//10
    count += 1
numCount = 0
sum = 0
while(numCount != 0):
    sum += ((n%10)**count)
    n = n//10
      
if sum == numCount:
    print('TRUE')
else:
    print('FALSE')