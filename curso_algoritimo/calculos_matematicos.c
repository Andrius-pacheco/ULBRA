// dois numeros enteiro (+, -, *, / )//

#include <stdio.h>

 int main()
 {
 	int h1, h2, soma, sub, div, mult;
 	printf("\n digite um numero inteiro:");
 	scanf("%i", &h1);
 	printf("\n digite outro numero inteiro:");
 	scanf("%i", &h2);
 	
 	soma= (h1+h2); //soma//
 	sub= (h1-h2); //subtração// 
 	div= (h1/h2); //divisão//
 	mult= (h1*h2); //multiplicação//
 	
 	printf("\n%i + %i= %i \n", h1, h2, soma);
 	printf(" %i - %i= %i \n", h1, h2, sub);
 	printf(" %i / %i= %i \n", h1, h2, div);
 	printf(" %i * %i= %i \n", h1, h2, mult);
 
 
 return 0;
 }
