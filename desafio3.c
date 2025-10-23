// Maior número em um vetor

#include <stdio.h>

int main() {
    int numeros[5];
    int i, maior;

    printf("Digite 5 números inteiros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    for (i = 1; i < 5; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("O maior número é: %d\n", maior);
    return 0;
}
