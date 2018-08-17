# -*- coding: utf-8 -*-
# Alessandra Barros
# Ciencia da computacao - UFCG

palavra = raw_input()
novapalavral = ""

for i in range(len(palavra)):
    if palavra[i].lower() == "a" or palavra[i].lower() == "e" or palavra[i].lower() == "i" or palavra[i].lower() == "o" or palavra[i].lower()   == "u" or palavra[i].lower() == "y":
        None
    else:
	novapalavral += "."
	if 65 <=  ord(palavra[i]) <= 88 or ord(palavra[i]) == 90:
		axu = ord(palavra[i]) + 32
            	novapalavral += chr(axu)
	else:
		novapalavral += palavra[i]

print novapalavral
