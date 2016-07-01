
i=0
tam=int(input("Digite a quantidade de nomes: "))
nomes=[]
for i in range(tam):
    nome=str(input())
    nomes.append(nome)
nomes.sort()
print ("\n")
print("os dois primeiros nomes:\n")
print (nomes[0])
print (nomes[1])

