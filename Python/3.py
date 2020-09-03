"""
Faça um algoritmo que solicita ao usuário um valor inteiro e exibe uma mensagem informando se o número é par ou ímpar.
"""

numeroSolicitado = int(input("Digite um número inteiro: "))

imparPar = numeroSolicitado % 2

if imparPar == 0:
    print("O número informado é par.")
else:
    print("O número informado é ímpar.")
