import math

cond = [True] * ((10**6)+1)
cond[0] = False
cond[1] = False


tam= int(math.ceil(math.sqrt(len(cond))))
for i in range(2,tam):
	if(cond[i]):
		for j in range(i+i, len(cond), i):
			cond[j] = False
			
num = int(raw_input())
lista = map(int, raw_input().split(" "))

for l in lista:
	raiz = math.sqrt(l)
	if(raiz%1 == 0):
		primo = (cond[int(raiz)])
	else:
		primo = False
		
	if(primo):
		print "YES"
	else:
		print "NO"
