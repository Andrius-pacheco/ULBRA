// qual a idade //

#include <stdio.h>

		int main()
		
	{
		int at, an, id;
			
			printf("Em que ano voce nasceu:");
			scanf("%i", &an);
			printf("\n Em que ano voce esta:");
			scanf("%i", &at);
			id= (at-an);
			printf("\n A sua idade e: %i anos", id);
			
		return 0;
	}