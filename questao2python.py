n=int(input("entre com o valor de n: "))
soma=1
for i in range(1,(n+1)):
    if(i%2==1):
        soma=soma*(((2*i)-1)**((2*i)-1))/((2*i)**(2*i))
    else:
        soma=soma+(((2*i)-1)**((2*i)-1))/((2*i)**(2*i))
print(soma)
