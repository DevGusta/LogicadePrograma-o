"""
Faça um programa que solicite um número ao usuário, seu programa deve garantir que o número
digitado pelo usuário é maior do que 1 e é um número ímpar. Depois disso, utilize o laço de
repetição while para gerar o padrão abaixo até o número digitado pelo usuário:

Digite um número: 5 <- número que o usuário digitou
1
12
123
1234
12345
"""

while True:
    numeroSolicitado = int(input("Digite um número maior que 1 e ímpar: "))
    if numeroSolicitado > 1 and numeroSolicitado % 2 == 1:
        break

for i in range(1, numeroSolicitado+1):
    for j in range(1, i+1):
        print(j, end=" ")
    print()

