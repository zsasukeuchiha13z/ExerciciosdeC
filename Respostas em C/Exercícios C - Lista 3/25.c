#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int res = 0;
	
	for(int i = 1;i < 1000;i++){
		// ja pega o i ate 1000
		if(i % 3 == 0  || i % 5 == 0){
		// somando apenas esses 'i'.	
			res = res + i;	
			
		}	
		
	}
	
	printf("Resultado: %d",res);
	
	return 0;
}
