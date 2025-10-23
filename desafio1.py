# Soma dos números pares até N
def soma_pares(n):
    soma = 0
    for i in range(1, n + 1):
        if i % 2 == 0:
            soma += i
    return soma

n = int(input("Digite um número: "))

print("Soma dos números pares até", n, "é:", soma_pares(n))
