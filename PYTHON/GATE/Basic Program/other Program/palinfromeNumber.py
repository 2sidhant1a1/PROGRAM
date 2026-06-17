
num = int(input())

rev = 0
tempNum = num

while(tempNum != 0):
    rev = (rev*10) + (tempNum%10)
    tempNum //= 10

if num == rev:
    print("Yes, It is Palindrome Number.")
else:
    print("No, It is not Palindrome Number.")