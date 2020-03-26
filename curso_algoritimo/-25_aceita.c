//5. Faça um algoritmo para entrar com código, sexo e idade de uma pessoa. Se a
//pessoa for do sexo feminino e tiver menos que 25 anos, imprimir código e
//mensagem: ACEITA. Caso contrário, imprimir código e a mensagem: NÃO
//ACEITA.


#include <stdio.h>
	int main(){
		char sexo;
		int idade;
		
			printf("digite sua idade:");
			scanf("%d%*c", &idade);
			printf("\n digite seu sexo:");
			scanf("%c", &sexo);
						
		if (sexo == 'f' && idade<25)
			printf("\n Foi aceita!");
			
		else
		{
		
			printf(" nao foi aceita");
		}
		return 0;
	}
