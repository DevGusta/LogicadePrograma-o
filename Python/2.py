"""
Faça um algoritmo que solicita ao usuário as notas de três provas. Calcule a média aritmética e
informe se o aluno foi Aprovado ou Reprovado (o aluno é considerado aprovado com a média igual ou superior a 6).
"""

nota1 = float(input("Digite sua primeira nota: "))
nota2 = float(input("Digite sua segunda nota: "))
nota3 = float(input("Digite sua terceira nota: "))

media = (nota1 + nota2 + nota3)/3

if media >= 6:
    print("Parabéns!! Você foi aprovado.")
else:
    print("Que pena!! Você foi reprovado.")
