#include <unistd.h>
#include <stdio.h>
int main(void)
{
	int compteur = 0;
	
	for (compteur = 0 ; compteur <= 2000000000 ; compteur += 1500)
	{
		printf("Test %d\n", compteur);
	}
}

