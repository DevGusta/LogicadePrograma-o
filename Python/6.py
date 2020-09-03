"""
Faça um algoritmo que solicite 3 números inteiros ao usuário, exiba uma mensagem de
“Números mágicos inseridos corretamente” desde que: o primeiro e o último valor sejam pares e o
segundo valor seja ímpar. Caso contrário exiba a mensagem: “Números inseridos em ordem errada”.
"""

numero1 = int(input("Digite o primeiro número: "))
numero2 = int(input("Digite o segundo número: "))
numero3 = int(input("Digite o terceiro número: "))

imparPar1 = numero1 % 2
imparPar2 = numero2 % 2
imparPar3 = numero3 % 2

if imparPar1 == 0:
    if imparPar2 == 1:
        if imparPar3 == 0:
            print("Números mágicos inseridos corretamente")
else:
    print("Números inseridos em ordem errada")
