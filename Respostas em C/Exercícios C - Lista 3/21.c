#include <stdio.h>

int main() {
    int num1, num2;
    int soma_pares = 0;
    int multiplicacao_impares = 1;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    // Verifica qual é o menor número para começar o loop
    int menor = num1 < num2 ? num1 : num2;
    // Verifica qual é o maior número para terminar o loop
    int maior = num1 > num2 ? num1 : num2;

    for (int i = menor; i <= maior; i++) {
        if (i % 2 == 0) {
            // Número par
            soma_pares += i;
        } else {
            // Número ímpar
            multiplicacao_impares *= i;
        }
    }

    printf("A soma dos numeros pares é: %d\n", soma_pares);
    printf("A multiplicação dos numeros ímpares é: %d\n", multiplicacao_impares);

    return 0;
}
