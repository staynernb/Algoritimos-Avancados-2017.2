# -*- coding: utf-8 -*-
# Alessandra Barros
# Ciencia da computacao - UFCG
while True:
    try:
        num = raw_input().split()
        start, end = int(num[0]), int(num[1])
        cont = 0
        for i in range(start, end + 1):
            aux = str(i)
            if len(set(aux)) == len(aux):
                cont += 1
        print cont
    except:
            break
