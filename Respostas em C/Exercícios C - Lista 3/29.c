#include <stdio.h>

int main() {
    int termos = 5;
    float soma = 0.0;

    for (float i = 0; i < termos; i++) {
        int fatorial = 1;
        for (int j = 1; j <= i + 1; j++) {
            fatorial = fatorial * j;
        }
        soma = soma + i / fatorial;
    }

    printf("O valor da s�rie para %d termos �: %.4f\n", termos, soma);

    return 0;
}
