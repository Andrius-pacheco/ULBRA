//Faça um algoritmo para ler um número e se ele for maior do que 30, então
//exibir metade do número, caso contrário, imprimir o dobro do número.

#include <stdio.h>

	int main(){
		
		float num, resp;
			printf("digite um numero :");
			scanf ("%f", &num);
		if (num <30)
		{   resp= num/2;
		
			printf("A metade do numero  e : %.2f", resp);
			
		}
			
		
		else{
			resp=num*2;
			printf("o dobro do numero: %.2f", resp);
			}
	    
		return 0;	
			
	}
