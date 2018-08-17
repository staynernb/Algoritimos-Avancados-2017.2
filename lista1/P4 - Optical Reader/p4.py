# -*- coding: utf-8 -*-
# Alessandra Barros
# Ciencia da computacao - UFCG
while True:
    try:
        n = int(raw_input())
        for i in range(n):
            op = raw_input().split()
            a, b, c, d, e = int(op[0]), int(op[1]), int(op[2]), int(op[3]), int(op[4])
            if a <= 127 and b > 127 and c > 127 and d > 127 and e > 127:
                print "A"
            elif a > 127 and b <= 127 and c > 127 and d > 127 and e > 127:
                print "B"
            elif a > 127 and b > 127 and c <= 127 and d > 127 and e > 127:
                print "C"
            elif a > 127 and b > 127 and c > 127 and d <= 127 and e > 127:
                print "D"
            elif a > 127 and b > 127 and c > 127 and d > 127 and e <= 127:
                print "E"
            else:
                print "*"
    except:
            break
