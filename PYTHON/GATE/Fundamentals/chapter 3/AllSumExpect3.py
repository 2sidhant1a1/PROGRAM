


num = int(input("Enter vlaue ="))

Sum = 0
for i in range(1, num+1):
    if i%3==0 :
        continue
    else:
        Sum += i
        print(i)

print(Sum)