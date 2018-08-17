# -*- coding: utf-8 -*-
# Alessandra Barros
# Ciencia da computacao - UFCG

num = int(raw_input())
lista = map(int, raw_input().split())
lista.sort()
nova_lista = ""
for i in range(len(lista)):
    nova_lista  += str(lista[i]) + " "

print nova_lista[:-1]
