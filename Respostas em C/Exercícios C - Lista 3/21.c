#include <stdio.h>

int main() {
    int num1, num2;
    int soma_pares = 0;
    int multiplicacao_impares = 1;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    // Verifica qual � o menor n�mero para come�ar o loop
    int menor = num1 < num2 ? num1 : num2;
    // Verifica qual � o maior n�mero para terminar o loop
    int maior = num1 > num2 ? num1 : num2;

    for (int i = menor; i <= maior; i++) {
        if (i % 2 == 0) {
            // N�mero par
            soma_pares += i;
        } else {
            // N�mero �mpar
            multiplicacao_impares *= i;
        }
    }

    printf("A soma dos numeros pares �: %d\n", soma_pares);
    printf("A multiplica��o dos numeros �mpares �: %d\n", multiplicacao_impares);

    return 0;
}
