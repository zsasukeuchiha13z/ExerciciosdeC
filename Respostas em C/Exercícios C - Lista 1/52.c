#include <stdio.h>

void main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float amigo1,amigo2,amigo3,aposta_total,p1,p2,p3,recebe1,recebe2,recebe3;
	int premio;

	printf("Quanto o 1o amigo investiu?:");
	scanf("%f", &amigo1);
	printf("Quanto o 2o amigo investiu?:");
	scanf("%f", &amigo2);
	printf("Quanto o 3o amigo investiu?:");
	scanf("%f", &amigo3);
	printf("Qual valor do premio?");
	scanf("%d",&premio);

	//percentual aposta
	aposta_total = amigo1 + amigo2 + amigo3;
	p1 = amigo1/aposta_total;
	p2 = amigo2/aposta_total;
	p3 = amigo3/aposta_total;

	recebe1 = p1 * premio;
	recebe2 = p2 * premio;
	recebe3 = p3 * premio;

	printf("\nO amigo 1 recebe: %f\n", recebe1);
	printf("O amigo 2 recebe: %f\n", recebe2);
	printf("O amigo 3 recebe: %f\n", recebe3);

}
