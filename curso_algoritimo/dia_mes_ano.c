#include <stdio.h>

int main()
{
	int  dia_n, dia_at, mes_n, mes_at, ano_n, ano_at, b1, b2, b3;
	
		
	
		printf("Digite o dia de seu nascimento:");
		scanf("%i", &dia_n);
		printf("Digite o mes de nascimento:");
		scanf("%i", &mes_n);
		printf("Digite o ano que voce nasceu:");
		scanf("%i", &ano_n);
		printf("Digite o dia atual:");
		scanf("%i", &dia_at);
		printf("digite o mes atual:");
		scanf("%i", &mes_at);
		printf("digite o ano atual:");
		scanf("%i", &ano_at);
		
		b1= ano_at-ano_n;
		b2= b1*365;
		b3= b1*12;
		
		printf("\n Voce nasceu em: %i/%i/%i", dia_n, mes_n, ano_n);
		printf("\n Voce viveu durante: %i dias", b2);
		printf("\n Sua idade em meses e: %i meses", b3);
		printf("\n Sua idade em anos e: %i anos", b1);
			
	return 0;