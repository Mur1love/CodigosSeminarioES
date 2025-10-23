// Mostrar números de 1 até N e indicar se são pares ou ímpares
#include <stdio.h>

int main() {
    int n, i;
    printf("Digite um número: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d é par\n", i);
        } else {
            printf("%d é ímpar\n", i);
        }
    }

    return 0;
}
