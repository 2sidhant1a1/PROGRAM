'''Problem statment:- Write Python Code to find sum of all Prime number upto
                         given n value(inclusive).'''

n = int(input("Enter the n value = "))
primeSum = 0
i = 1
while n>=1:
    count =0
    for i in range(2, int (n**0.5) + 1):
        if n%i==0:
            count+=1
            print("n = {}, i = {}".format(n,i))
        print("i = {}".format(i))
    if count == 0:
        primeSum +=n
        print("n = {}".format(n))
    n=n-1

print("SUM Of Prime Number = {}".format(primeSum))
