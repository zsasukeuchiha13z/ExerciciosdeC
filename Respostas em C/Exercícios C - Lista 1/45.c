#include <stdio.h>


int main()

{

   char caracter;



   scanf("%c", &caracter);



   int primeiro_maisculo = 'A';

   int primeiro_minusculo = 'a';
   	   	   // pegando do maisculo para o minusculo
   int diferenca = primeiro_minusculo - primeiro_maisculo;



   printf("%c\n", caracter + diferenca);

   return 0;

}
