n = int(input())

numList = []
for i in range(n):
    numList.append(int(input("Enter Value: ")))

dupli = []
for i in range(len(numList)):
    flag = 1
    for j in range(len(dupli)):
        if numList[i] == dupli[j]:
            flag = 0
    if(flag):
        dupli.append(numList[i])
    
numList.clear()
for i in range(len(dupli)-1, -1, -1):
    numList.insert(0,dupli[i])

print("\nAfter :-")

for j in range(len(numList)):
    print(numList[j],end=', ')
    