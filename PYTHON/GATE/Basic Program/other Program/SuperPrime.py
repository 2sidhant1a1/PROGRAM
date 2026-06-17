prime = list()
n = int(input())


def check_prime(n):
    flag = 1
    for j in range ( 2, n//2 +1):
        if(n%j == 0):
            flag = 0
            break
    return flag


for i in range(2,n+1):
    if check_prime(i):
        prime.append(i)

for i in range(2, len(prime)+1):
    if check_prime(i):
        print(prime[i-1],end=', ')