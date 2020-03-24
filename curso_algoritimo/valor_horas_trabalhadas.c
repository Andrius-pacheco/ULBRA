// valor de horas trabalhadas//

#include <stdio.h>

	int main()
	{
		
		int nf, horas_trabalhadas;
		float valor_horas_trabalhadas;
		
		printf("digite o numero do funcionarios!:");
		
		scanf("%i", &nf);
		
		printf("\nescreva a quantidade de horas trabalhadas!:");
		
		scanf("%i", &horas_trabalhadas);
		
		printf("\ndigite o valor das horas trabalhadas!:");
		
		scanf("%f", &valor_horas_trabalhadas);
		
		valor_horas_trabalhadas= (horas_trabalhadas * valor_horas_trabalhadas);
		
		printf("\n o valor do salario do funcionario %i e: %f", nf, valor_horas_trabalhadas);
		
		return 0;
	}

