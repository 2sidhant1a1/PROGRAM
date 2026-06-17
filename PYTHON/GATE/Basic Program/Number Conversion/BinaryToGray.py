num= input()
numList = list()

for i in range(len(num)):
    numList.append(int(num[i]))

print("Gray Code: ",numList[0],end='')

# Iterate in reverse order for correct binary to decimal conversion
for i in range(1, len(numList)):
    print(numList[i-1] ^ numList[i],end='')
    
    
