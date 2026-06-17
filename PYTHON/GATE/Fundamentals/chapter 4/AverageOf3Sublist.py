'''
Problem Statment: Write the python code to find the average sum of 3 subList.
                first sublist = sum of all list.
                second sublist = Every third element in Reverse order of List.
                Thired sublist = sum of element from n/2 to n 
                                    i.e list[n/2 to n]
'''



li = list()

n = int(input("ENter Size of List: "))
for i in range(n):
    li.append(int(input("Enter value: ")))

# sublist define
sub1 = li[0:n:]
sub2 = li[::-3]
sub3 = li[int(n/2):n]

# sum of the sub list
SubSum1 = 0
SubSum2 = 0
SubSum3 = 0
# function use to sum sublist
def sum(sub, sum):
    for i in range(len(sub)):
        sum += sub[i]
    return sum
# Calling sum function
SubSum1 = sum(sub1,SubSum1)
SubSum2 = sum(sub2,SubSum2)
SubSum3 = sum(sub3,SubSum3)

# Print sublist
print(sub1)
print(sub2)
print(sub3)

# Print Sum of subList
print("sub1 = {}".format(SubSum1))
print("sub2 = {}".format(SubSum2))
print("sub3 = {}".format(SubSum3))

# find and print average of three sublist
avg = (SubSum1+SubSum2+SubSum3)/3
print(avg)