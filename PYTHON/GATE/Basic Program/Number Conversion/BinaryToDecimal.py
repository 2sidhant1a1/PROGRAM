numList = list()
n = int(input("Enter the number of binary digits: "))

for i in range(n):
    numList.append(int(input("Enter 0 or 1: ")))

power = 0
sum = 0

# Iterate in reverse order for correct binary to decimal conversion
for i in range(len(numList)-1, -1, -1):
    if numList[i] == 1:
        sum += 2**power
    power += 1

print("Decimal Equivalent:", sum)