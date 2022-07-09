import random
import time
pedra = "PEDRA"
papel = "PAPEL"
tesoura = "TESOURA"

objetos = [pedra, papel, tesoura]

minha_escolha = input("Eu escolho (pedra, papel ou tesoura): ").strip().upper()
escolha_maquina = random.choice(objetos)
print("JO")
time.sleep(1)
print("KEN")
time.sleep(1)
print("PO!")
time.sleep(1)
if minha_escolha == "PEDRA" and escolha_maquina == "TESOURA":
    print("Você escolheu {} e a máquina {}, você venceu".format(minha_escolha, escolha_maquina))
elif minha_escolha == "PEDRA" and escolha_maquina == "PAPEL":
    print("Você escolheu {} e a máquina {}, máquina venceu".format(minha_escolha, escolha_maquina))
elif minha_escolha == "PAPEL" and escolha_maquina == "PEDRA":
    print("Você escolheu {} e a máquina {}, você venceu".format(minha_escolha, escolha_maquina))
elif minha_escolha == "PAPEL" and escolha_maquina == "TESOURA":
    print("Você escolheu {} e a máquina {}, máquina venceu".format(minha_escolha, escolha_maquina))
elif minha_escolha == "TESOURA" and escolha_maquina == "PAPEL":
    print("Você escolheu {} e a máquina {}, você venceu".format(minha_escolha, escolha_maquina))
elif minha_escolha == "TESOURA" and escolha_maquina == "PEDRA":
    print("Você escolheu {} e a máquina {}, máquina venceu".format(minha_escolha, escolha_maquina))
elif minha_escolha == escolha_maquina:
    print("Você escolheu {} e a máquina {}, vocês empataram".format(minha_escolha, escolha_maquina))
