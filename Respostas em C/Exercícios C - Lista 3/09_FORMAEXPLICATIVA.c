#include <stdio.h>

int main() {
    int N;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &N);

    printf("Os %d primeiros n�meros naturais �mpares s�o:\n", N);

    for (int i = 1; N > 0; i += 2) {
        printf("%d ", i);
        N--;
    }

    return 0;
}
