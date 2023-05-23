#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int s = +1;
	int n;
	int numero;
	int maior;
	
	
	printf("Digite a quantidade de numeros: ");
	scanf("%d",&n);
	printf("Digite um numero: ");
	scanf("%d",&numero);
	maior = numero;
	// sempre é preciso quando se quer encontrar maior ou menor para armazenamento
	while(n != s){
		
		
		s = s + 1;
		printf("Digite um numero: ");
		scanf("%d",&numero);
    }
	if(numero > maior){
	
		maior = numero;
		
	}
	printf("Maior: %d",maior);
	
	
	return 0;
}
