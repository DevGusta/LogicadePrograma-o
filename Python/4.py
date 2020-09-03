"""
Faça um algoritmo que solicita ao usuário uma letra (caracter) e exiba uma mensagem informando se
é uma vogal ou uma consoante .
"""

letraSolicitada = input("Digite uma letra: ")
letraSolicitada.lower()

if letraSolicitada == 'a' or letraSolicitada == 'e' or letraSolicitada == 'i' or letraSolicitada == 'o' \
        or letraSolicitada == 'u':
    print("Você digitou uma vogal.")
else:
    print("Você digitou uma consoante.")
