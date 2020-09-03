"""
Faça um algoritmo que solicita ao usuário um número inteiro e exiba este número na tela.
Se o número for negativo, antes de ser exibido, ele deve ser transformado no equivalente positivo.
"""

numeroSolicitado = int(input("Digite um número inteiro: "))

if numeroSolicitado < 0 :
    numeroSolicitado = numeroSolicitado * -1

print(numeroSolicitado)
