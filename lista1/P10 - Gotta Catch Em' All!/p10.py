# -*- coding: utf-8 -*-
# Alessandra Barros
# Ciencia da computacao - UFCG
def bul(frase):
    aux = "Bulbasaur"
    cont = [0,0,0,0,0,0,0,0,0]

    for i in range(len(aux)):
        cont[i] += frase.count(aux[i])
	if aux[i] == "u" or aux[i] == "a":
		cont[i] /= 2
    return min(cont)	

frase = raw_input()
print bul(frase)
