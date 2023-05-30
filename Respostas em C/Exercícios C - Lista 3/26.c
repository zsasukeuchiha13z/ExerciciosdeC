#include <stdio.h>

int main() {
    int numero, multiplo;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    multiplo = numero;

    while (1) {
        if (multiplo % 11 == 0 && multiplo % 13 == 0 && multiplo % 17 == 0) {
            printf("O primeiro multiplo comum de 11, 13 e 17 apos %d e %d\n", numero, multiplo);
            break;
        }
        multiplo++;
    }

    return 0;
}

