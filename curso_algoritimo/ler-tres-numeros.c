//3. Faça um algoritmo para ler três números e verificar se a soma deles é maior
//que 50. Se for, escrever uma mensagem informando.//

#include <stdio.h>
	int main(){
		int num1, num2, num3, resp;
			printf("digite um numero:");
			scanf("%i", &num1);
			printf("digite outro numero:");
			scanf("%i", &num2);
			printf("digite outro numero:");
			scanf("%i", &num3);
			
			resp= num1+num2+num3;
			
		if (resp>50)
		  	
		  	printf("sua soma e maior que 50:");
		else
		{
			printf ("seu numero e menor que 50:");
		}
			
		return 0;
	}
