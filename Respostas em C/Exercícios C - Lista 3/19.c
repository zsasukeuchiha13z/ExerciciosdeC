#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero;
	
	
	printf("Digite um numero entre 100 e 999: ");
	scanf("%d",&numero);
	
	if(numero > 100 && numero <= 999){
		
		
		while (numero > 0) {
        int digito = numero % 10; // pega o resto de 10 (resto)
        printf("%d\n", digito); // mostra o algarismo	(m)
        numero = numero/10; // remove o último dígito	(divisao)
    }	
		
	}
	else{
		
		printf("Numero invalido");
	}
	
	return 0;
}
