n = int(input())

numList = []
for i in range(n):
    numList.append(int(input("Enter Value: ")))

print("Before Reversing:- ")
for j in range(len(numList)):
    print(numList[j],end=', ')


i = 0
j = len(numList)-1
while(i<j):
    temp = numList[i]
    numList[i] = numList[j]
    numList[j] = temp
    i += 1
    j -= 1

print("\nAfter Reversing:-")

for j in range(len(numList)):
    print(numList[j],end=', ')
    