# -*- coding: utf-8 -*-
# Alessandra Barros
# Ciencia da computacao - UFCG

def ordn(lista):
    for i in range(0, len(lista)-2):
        if lista[i+2]-lista[i] == 2 and lista[i+1] != lista[i] and lista[i+1] != lista[i+2]:
            return "YES"
    return "NO"

num = int(raw_input())
bolas = map(int, raw_input().split())
b = set(bolas)
bolas = list(b)
bolas.sort()

print ordn(bolas)
