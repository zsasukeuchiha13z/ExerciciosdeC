#include <stdio.h>

int main() {
    int dia, mes, ano, dias_no_mes;

    printf("Insira a data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    // Verifica se o ano � bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        // Se for bissexto, fevereiro tem 29 dias
        dias_no_mes = 29;
    } else {
        // Se n�o for bissexto, fevereiro tem 28 dias
        dias_no_mes = 28;
    }

    // Verifica se o m�s � v�lido
    if (mes < 1 || mes > 12) {
        printf("Data inv�lida.\n");
        return 0;
    }

    // Verifica se o dia � v�lido
    switch(mes) {
        case 2:
            if (dia < 1 || dia > dias_no_mes) {
                printf("Data inv�lida.\n");
                return 0;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (dia < 1 || dia > 30) {
                printf("Data inv�lida.\n");
                return 0;
            }
            break;
        default:
            if (dia < 1 || dia > 31) {
                printf("Data inv�lida.\n");
                return 0;
            }
    }

    printf("Data v�lida.\n");

    return 0;
}
