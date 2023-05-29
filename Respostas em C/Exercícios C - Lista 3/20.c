#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero;
	int n_lidos = 0;
	int n_par = -1;
	
	while(numero != 1000){
		
		printf("\nDigite um numero: \n");
		scanf("%d",&numero);
		
		n_lidos = n_lidos + 1;	
			
		if(numero % 2 == 0){	
			
			printf("");
			printf("numero par!");	
			n_par = n_par + 1;
			
		}else{  //impar
			
			printf("");
			printf("numero impar!");
				
		}				
	}
	
	printf("\nTotal de %d numeros lidos",n_lidos);
	printf("\nTotal de %d numeros pares(tirando o 1000)",n_par);
	
	return 0;
}
