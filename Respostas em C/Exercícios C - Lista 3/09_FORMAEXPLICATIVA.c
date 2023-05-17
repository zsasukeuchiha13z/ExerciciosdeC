#include <stdio.h>

int main() {
    int N;
    printf("Digite um número inteiro: ");
    scanf("%d", &N);

    printf("Os %d primeiros números naturais ímpares são:\n", N);

    for (int i = 1; N > 0; i += 2) {
        printf("%d ", i);
        N--;
    }

    return 0;
}
