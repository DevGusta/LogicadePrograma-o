"""
Faça um programa que solicite um número ao usuário, seu programa deve garantir que o número
digitado pelo usuário é maior do que 1. Este número representará a quantidade de somas que
devem ser feitas utilizando o seguinte padrão:

3 + 33 + 333 + 3333 + 33333 + 333333 + …
Valor digitado: 1 -> Resultado: 3
Valor digitado: 2 -> Resultado: 36
"""

NUMERO_PADRAO = '3'

while True:
    numeroSolicitado = int(input("Digite um número maior que 1: "))
    if numeroSolicitado > 1:
        break

soma = 0
for i in range(1, numeroSolicitado+1):
    soma += int(NUMERO_PADRAO * i)

print(f"O valor total da soma é {soma}")
