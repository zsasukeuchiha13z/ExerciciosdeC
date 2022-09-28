#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float valor_pago,valor_pago2,valor_total_final;

	printf("Digite o valor pago:");
	scanf("%f", &valor_pago);
	valor_total_final = valor_pago;
	valor_pago2 = valor_pago;
	valor_pago = valor_pago * 90/100;
	printf("Valor com desconto de 10 porcento>>%f\n", valor_pago);
	valor_pago2 = valor_pago2/3;
	printf("Valor dividido em 3 vezes, sem juros:%f\n",valor_pago2);
	valor_pago = valor_pago * 5/100;
	printf("Comissão do vendedor na compra a vista (com desconto):%f\n",valor_pago);
	valor_total_final = valor_total_final * 5/100;
	printf("Comissão do vendedor na compra parcelada (do valor total):%f",valor_total_final);


			return 0;
}
