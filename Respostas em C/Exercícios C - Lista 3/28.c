#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int N;
    float E = 1.0;
    float factorial = 1.0;
    
    printf("Qual valor de N: ");
    scanf("%d",&N);

    for (int i = 1; i <= N; i++) {
        factorial = factorial * i;
        E = E + 1.0 / factorial;
    }

    printf("O valor de E com N = 5 e: %.4f\n", E);

    return 0;
}
