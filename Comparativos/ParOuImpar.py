# Mostrar números de 1 até N e indicar se são pares ou ímpares

n = int(input("Digite um número: "))

for i in range(1, n + 1):
    if i % 2 == 0:
        print(i, "é par")
    else:
        print(i, "é ímpar")
