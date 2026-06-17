num = int(input())
tempNum = num

count = 0
mun = 0
flag =0
while(tempNum != 0):
    if  tempNum%10 == 4 or tempNum%10 == 5:
        flag = 1
        mun = mun*10 + tempNum%10
    else:
        flage = 0
    tempNum = tempNum//10
    count += 1

if count%2 == 0 and flag and mun == num:
    print("Pure")
else:
    print("Not Pure")