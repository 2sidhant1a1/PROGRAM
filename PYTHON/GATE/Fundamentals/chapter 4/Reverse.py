a = list() # array diclearation

n = int(input()) # size of inpute
for i in range (n): # takeing element form users
    a.append(int(input()))

size = len(a) # use to find the size of list
i = 0
j = size-1

while(i<j):
    a[i] = a[i] + a[j]
    a[j] = a[i] - a[j]
    a[i] = a[i] - a[j]

    i += 1
    j -= 1

print("Reverse list = ",a)