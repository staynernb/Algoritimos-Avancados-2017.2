from math import sqrt
num = int(raw_input())
i = 1
for j in xrange(2, int(sqrt(num)) + 1):
    if num % j == 0:
        i *= j
        while (num % j == 0):
            num /= j
if num > 1:
    i *= num
print i
