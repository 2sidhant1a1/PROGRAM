


string = input("Enter any sentences:-")
length = len(string)

for i in range(0, length):
    if string[i] != ' ':
        print(string[i], end = '')
    else:
        print()