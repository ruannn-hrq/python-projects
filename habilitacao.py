# criar váriaveis atribuindo a habilitação
# questionar qual habilitação a pessoa possui
# se tiver exibir, se não falar que não existe esse tipo de habilitação

print("Olá condutor")
B = ("carro")
A = ("moto")
AB = ("Carro e moto")
nome = str(input("Digite seu nome: ")).strip()
#idade = int(input("Digite sua idade: "))
print(" Olá, {}".format(nome))
#Pergunta se é um condutor ou não
'''if (idade >= 18):
    print("Parábens, você já pode ir a uma auto-escola e iniciar seu processo de habilitação")
else:
    print("Segura a peteca ae")
'''
# Código para consultar a categoria caso já seja um condutor
categoria = str(input("Digite sua categoria: ")).strip().upper()

if(categoria == "B"):
        print("Você possui categoria para dirigir carro")
elif(categoria == "A"):
        print("Você possui categoria para dirigir moto")
elif(categoria == "AB"):
        print("Você possui categoria para dirigir carro e moto")
else:
    print("Categoria não encontrada ou inexistente")

print("Fim da consulta")