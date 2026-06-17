list = list()
status = []

n = int(input("Enter size of List: "))
for i in range(n):
    list.append(int(input("Enter Number = ")))
    status.append(0)

count = 0
for i in range(n):
    if(status[i] == 0):
        for j in range(i+1,n):
                if(list[i] == list[j]):
                    count = count + 1
                    status[j] = 1

print(count)