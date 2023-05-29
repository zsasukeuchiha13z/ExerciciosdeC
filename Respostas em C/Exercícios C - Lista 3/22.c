#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float nota;
	int n_notas = 0; // Inicializar o contador de notas como zero
	float media_a = 0;
	
	do {	
		printf("Digite uma nota: ");
		scanf("%f", &nota);
		
		if (nota >= 0 && nota <= 10) { // Verificar se a nota está dentro do intervalo válido
			n_notas = n_notas + 1;
			media_a = media_a + nota; // Acumular as notas para calcular a média posteriormente
		} else {
			printf("Nota invalida. Digite uma nota entre 0 e 10.\n");
		}
			
	} while (n_notas < 20 && nota >= 0); // Condição para encerrar o loop
	
	if (n_notas >= 10 && n_notas <= 20) {
		media_a = media_a / n_notas;
		media_a = fabs(media_a);
		printf("Media = %f\n", media_a);
	} else {
		printf("Numero de notas invalido. Deve haver entre 10 e 20 notas.\n");
	}
	
	return 0;
}








