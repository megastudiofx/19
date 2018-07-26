#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int choix;

	choix = '0';
	printf("=== Menu ===\n");
	printf("1. Royal Cheese\n");
	printf("2. Mc Deluxe\n");
	printf("3. Mc Bacon\n");
	printf("4. Big mac\n");
	printf("Votre choix ?");
	scanf("%d", &choix);
	printf("\n");
	switch (choix)
	{
		case 1:
			printf("Vous avez choisis le Royal Cheese");
			break;
		case 2:
			printf("Vous avez choisis le Mc Deluxe");
			break;
		case 3:
			printf("Vous avez choisis le Mc Bacon");
			break;
		case 4:
			printf("Vous avez choisis le Big Mac");
			break;
		default:
			printf("Aucun choix");
			break;
	}
	return(0);
}
