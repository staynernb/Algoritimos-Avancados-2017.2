# -*- coding: utf-8 -*-
# Alessandra Barros
# Ciencia da computacao - UFCG
num = int(raw_input())
for i in range(num):
	tiros = int(raw_input())
	pos = raw_input().split()
	pulos = raw_input()

	Kilo_ati = 0
	for t in range(tiros):
		if int(pos[t]) <= 2 and pulos[t] == "S":
			Kilo_ati += 1
		elif int(pos[t]) > 2 and pulos[t] == "J":
			Kilo_ati += 1
	print "%d" % (Kilo_ati)
	kilo_ati = 0
