num = map(int, raw_input().split(' '))
num1, num2 = num[0], num[1]
resto = num1 % num2
if num2 - num1 >= 1:
    print 1
else:
    while (resto != 0):
        num1 = num2
        num2 = resto
        resto = num1 % num2
    print num2
