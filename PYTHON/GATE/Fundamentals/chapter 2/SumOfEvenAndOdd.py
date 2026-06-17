"""problem statment :- Write Python Code to find difference b/w sum of even 
                        numbers and sum of odd numver upto given n value."""

n = int(input("Enter n value = "))
EvenSum = 0
OddSum = 0

for i in range(n+1):
    if (i%2 == 0):
        EvenSum += i
    else:
        OddSum += i

if(EvenSum >= OddSum):
    print("Absolute diffrence between {} and {} = {}".format(EvenSum, OddSum, EvenSum - OddSum))
else:
    print("Absolute diffrence between {} and {} = {}".format(EvenSum, OddSum, OddSum - EvenSum))