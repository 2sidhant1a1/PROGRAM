def maxAndMin(l, maxElem, minElem, k):
    if k == len(l):  # Stop when all elements are checked
        print("Maximum Element:", maxElem)
        print("Minimum Element:", minElem)
        return  # Exit the function
    
    # Update max and min values
    if maxElem < l[k]:
        maxElem = l[k]
    if minElem > l[k]:
        minElem = l[k]
    
    # Recursive call with next index
    maxAndMin(l, maxElem, minElem, k + 1)

# Input handling
l = []
n = int(input("Enter size of Array: "))  # Fixed spelling
for i in range(n):
    l.append(int(input("Number: ")))

# Start recursion
maxAndMin(l, float('-inf'), float('inf'), 0)