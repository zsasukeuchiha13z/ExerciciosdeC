#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero;
	int i = 1;	   // sempre lembrar de inicializar a variavel
	int res = 0;  // sempre lembrar de inicializar a variavel
	
	
	printf("Digite um numero inteiro: ");
	scanf("%d",&numero);
	
	while(i < numero){
		
		if(numero % i == 0){
			
			res = res + i;
				
		}
		i++;
	}
	printf("Resultado: %d",res);
	
	return 0;
}
