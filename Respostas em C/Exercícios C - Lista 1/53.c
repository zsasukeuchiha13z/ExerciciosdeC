#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int comp,larg,preco_tela,perimetro,valor;

	printf("Digite o comprimento:");
	scanf("%d",&comp);
	printf("Digite a largura:");
	scanf("%d",&larg);
	preco_tela = 45;

	perimetro = (2*comp) + (2*larg);
	valor = preco_tela * perimetro;

	printf("Valor para cerca terreno=%d",valor);




	return 0;
}
