"""
Faça um algoritmo que solicita ao usuário dois números inteiros. O primeiro é o valor das horas e o
segundo dos minutos. Verifique se a hora é válida ou inválida e exiba uma mensagem
correspondente (São válidas as horas entre 00:00 e 23:59).
"""

horas = int(input("Informe as horas: "))
minutos = int(input("Agora informe os minutos:"))

if horas < 0 or horas > 23 or minutos < 0 or minutos > 59:
    print(f" {horas}:{minutos} está inválida.")
    print("São válidas as horas entre 00:00 e 23:59 ")
else:
    print(f" {horas}:{minutos} está válida.")
