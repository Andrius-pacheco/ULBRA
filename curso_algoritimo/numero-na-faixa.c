//1. Faça um algoritmo para ler um número e informar se ele está na faixa de//
//números entre 100(inclusive) e 1000(inclusive).//

#include <stdio.h>
	int main(){
		int num;
			printf("digite um numero:");
			scanf("%i", &num);
			
		if (num >=100 || num==1000)
			printf("\n esta dentro da faixa!!");
		else
		{
			printf("nao esta dentro da faixa!!");
			
		}
			
		return 0;
	}