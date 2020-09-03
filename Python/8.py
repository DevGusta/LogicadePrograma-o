"""
Faça um programa que solicite um número ao usuário, seu programa deve garantir que o número
digitado é maior que 1. Por fim, o programa deve exibir dois resultados:
a.	A soma de todos os números entre 1 e o número digitado (incluindo 1 e o número digitado
na soma);
b.	A média de todos os números entre 1 e o número digitado (incluindo 1 e o número digitado
na soma).
"""

while True:
    numeroSolicitado = int(input("Digite um número maior que 1: "))
    if numeroSolicitado > 1:
        break

soma = 0
qntdNum = 0
for contador in range(1, numeroSolicitado+1):
    soma += contador
    qntdNum += 1

media = soma/qntdNum

print(f"A soma de todos os números entre 1 e {numeroSolicitado} é {soma}")
print(f"A média de todos os números entre 1 e {numeroSolicitado} é {media}")
