
numList = list()
n = int(input())
for i in range(n):
    numList.append(int(input()))

power = 0
sum = 0
for i in range(len(numList)-1, 0):
    if(numList[i] == 1):
        sum += 2**power
    power += 1

print(sum)