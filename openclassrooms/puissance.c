#include <stdio.h>

int	main (void)
{
	int nombre1;
	int result;

	result = '0';
	nombre1 = '0';
	printf("Calculer une puissance au carré\n");
	printf("Nombre ?");
	scanf("%d", &nombre1);
	result = nombre1 * nombre1;
	printf("votre résultat est %d", result);
	return(0);
}
