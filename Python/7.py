"""
Faça um algoritmo que solicite um número inteiro ao usuário, caso este número esteja entre 10 e 20
ou entre 40 e 50 exiba a mensagem: “Número na faixa correta”, caso contrário exiba a mensagem: “Número incorreto”.
"""

numeroSolicitado = int(input("Digite um número inteiro: "))

if 10 <= numeroSolicitado <= 20 or 40 <= numeroSolicitado <= 50:
    print("Número na faixa correta.")
else:
    print("Número incorreto.")
