#include <stdio.h>

int bonjour(void)
{
	return	printf("hello11\n");
}

int main(void)
{
	int retour_fonction;

	retour_fonction = bonjour();

	printf("Retour : %d\n", retour_fonction);

	return 0;
}
