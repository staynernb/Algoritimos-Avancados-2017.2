# -*- coding: utf-8 -*-
# Alessandra Barros
# Ciencia da computacao - UFCG
while True:
    num = raw_input().split()
    x1, y1, x2, y2 = int(num[0]), int(num[1]), int(num[2]), int(num[3])
    if x1 == 0 and y1 == 0 and x2 == 0 and y2 == 0: 
        break
    if x1 == x2 and y1 == y2:
        print "0"
    elif (x2 - x1) == abs(y2 - y1) or abs (x2 - x1) == abs (y2 - y1 ) or abs (x2 - x1) == (y2 - y1) or (x2 - x1) == (y2 - y1):
        print "1" 
    elif x1 == x2 or y1 == y2:
        print "1" 
    else:
        print  "2"
