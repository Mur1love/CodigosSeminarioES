#include <stdio.h>

int main() {
    int n, i;
    printf("Digite um número: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d é par\n", n);
    } else {
        printf("%d é ímpar\n", n);
    }
    return 0;
}
