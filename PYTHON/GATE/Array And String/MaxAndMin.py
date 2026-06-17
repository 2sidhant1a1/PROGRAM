numList = list()
n = int(input("Enter number of List: "))

for i in range(n):
    numList.append(int(input("Enter Value: ")))

maxElem = numList[0]
minElem = numList[0]
for i in range(1,len(numList)):
    if(maxElem < numList[i]):
        maxElem = numList[i]
    if(minElem > numList[i]):
        minElem = numList[i]

print("Maximum element: ", maxElem)
print("Minimun Element: ",minElem)