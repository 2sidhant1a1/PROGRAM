num= input()
numList = list()

for i in range(len(num)):
    numList.append(int(num[i]))

count = 0
octalValue = []
Sum_3bit =0

# Iterate in reverse order for correct binary to decimal conversion
for i in range(len(numList)-1, -1, -1):
    if numList[i] == 1:
        Sum_3bit += numList[i] * (2**count)
    count += 1
    
    if count == 3 or i == 0:  # Process groups of 3 bits
        octalValue.append(Sum_3bit)
        Sum_3bit = 0
        count = 0  
    
for i in range(len(octalValue)-1, -1, -1):
    print(octalValue[i],end="")