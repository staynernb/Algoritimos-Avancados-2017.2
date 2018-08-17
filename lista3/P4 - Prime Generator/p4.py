from math import sqrt
primes = [2]
 
for i in range(3,32000,2):
    isprime = True
 
    cap = sqrt(i)+1
 
    for j in primes:
        if (j >= cap):
            break
        if (i % j == 0):
            isprime = False
            break
    if (isprime):
        primes.append(i)
 
T = input()
output = ""
for t in range(T):
 
    if (t > 0):
        output += "\n"
 
    M,N = raw_input().split(' ')
    M = int(M)
    N = int(N)
    cap = sqrt(N)+1
