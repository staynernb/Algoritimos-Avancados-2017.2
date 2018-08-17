lista = map(int, raw_input().split())
lista.sort()
quantidade_buques = lista[0]
if lista[0] > 0 and (lista[1] - lista[0] + 1)%3 == 0 and (lista[2] - lista[0] + 1)%3 == 0:
    quantidade_buques = (lista[0] + lista[1] + lista[2])/3
else:
    quantidade_buques = lista[0]
    quantidade_buques += (lista[1] - lista[0])/3
    quantidade_buques += (lista[2] - lista[0])/3

print quantidade_buques
