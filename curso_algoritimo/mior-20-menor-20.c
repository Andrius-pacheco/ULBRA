//4. Construa um algoritmo que leia dois números e efetue a adição. Caso o valor
//somado seja maior que 20, este deverá ser apresentado somando e a ele mais
//8; caso o valor somado seja menor ou igual a 20, este deverá ser apresentado
//subtraindo-se 5


#include <stdio.h>
	int main(){
		int num, num2, resp, soma,sub;
		
			printf("digite um numero:");
			scanf("%i", &num);
			printf("digite outro numero:");
			scanf("%i", &num2);
			
			resp=num+num2;
			
			if (resp>=20)
			{
				soma= resp+8;
				printf("valor da operaçao e: %i",soma);
			}
			else
			{
				sub=resp-5;
				printf("o valor da operaçao é: %i", sub);
			}
		return 0;
	}
