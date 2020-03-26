//6. Fazer um algoritmo que leia o percurso em quilômetros, o tipo do carro e
//informe o consumo estimado de combustível, sabendo-se que um carro tipo C
//faz 12 Km com um litro de gasolina, um tipo B faz 9 Km e o tipo A, 8 Km por
//litro.

#include <stdio.h>

	int main(){
		
		char tipo;
		float Km, consumo;
			
			printf("digite o percurso em km:");
			scanf("%f", &Km);
			printf("\n digite o tipo do carro:");
			printf("\n tipo A= 8 km/L, tipo B= 9 km/L e tipo c= 12 km/L:");
			scanf("%s", &tipo);
			

			
			if (tipo== 'a'|| tipo=='A')
		{
				consumo=(Km/8);
			printf("O consumo de combustivel foi: %.2f litros",consumo);
			
		}
			
		else
			if (tipo == 'b' ||tipo == 'B')
		{
				consumo=(Km/9);
			printf("O consumo de combustivel foi: %f.2f litos ", consumo);
				
			
		}
			 
		else
				if (tipo == 'c' ||tipo == 'C')
		{
				consumo=(Km/12);
			printf("O consumo de combustivel foi: %f.2f litos ", consumo);
				
			
		}
			
			
		
	return 0;
}