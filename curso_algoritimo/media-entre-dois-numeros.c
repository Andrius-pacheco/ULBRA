
// media entre dois numeros://

#include <stdio.h>
	int main()
{
	int h1, h2;
	float  media;
	
	printf("digite um numero:");
	scanf("%i", &h1);
	printf("digite outo numero:");
	scanf("%i", &h2);
	media= (h1+h2)/2;
	printf("\n A media entre os numeros %i e %i e:  %f", h1, h2, media);
	return 0;
}   