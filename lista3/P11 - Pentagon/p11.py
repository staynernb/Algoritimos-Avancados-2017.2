# -*- coding: utf-8 -*-
import math
num = int(raw_input())
for i in range(num):
    lado = int(raw_input())
    area_pen = (5*(lado**2))/(4*(math.sqrt(5-2*(math.sqrt(5)))))
    print "%.3f" % (area_pen)
