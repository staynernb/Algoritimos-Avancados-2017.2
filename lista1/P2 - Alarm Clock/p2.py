# -*- coding: utf-8 -*-
# Alessandra Barros
# Ciencia da computacao - UFCG
while True:
    hrs = raw_input().split()
    h1, m1, h2, m2 = int(hrs[0]), int(hrs[1]), int(hrs[2]), int(hrs[3])

    if h1 == 0 and m1 == 0 and h2 == 0 and m2 == 0: break
    if h1 < h2 and m1 == m2:
        minn = (h2-h1) * 60
    elif h1 < h2 and m1 > m2:
        minn = (h2 - h1) * 60 - m1 + m2
    elif h1 < h2 and m1 < m2:
        minn =  (h2 - h1) * 60 + m2 - m1
    elif h1 > h2:
        minn = ((23 - h1) * 60 + (60 - m1)) + (h2 * 60) + m2
    elif h1 == h2 and m1 <= m2:
        minn = m2-m1
    elif h1 == h2 and m1>m2:
         minn = ((23-h1)*60 + (60-m1)) + (h2*60) + m2
    print "%d" % (minn)
  
