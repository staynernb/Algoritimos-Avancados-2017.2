# -*- coding: utf-8 -*-
# Alessandra Barros
# Ciencia da computacao - UFCG
usb = int(raw_input())
arquivo = int(raw_input())
lista = []

for i in range(usb):
    tamanho_usb = int(raw_input())
    lista.append(tamanho_usb)

lista.sort()
soma = 0
i = 0
n = len(lista)-1

while i < len(lista) - 1:
    soma += lista[n]
    if soma >= arquivo: break
    i += 1
    n -= 1

print "%d" % (i + 1)
