#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int	main (int argc, char** argv)
{
	int nombreMystere;
	int nombreEntre;
	int level;
	int continuerPartie;
	char newGame;

	nombreMystere = 0;
	nombreEntre = 0;
	level = 0;
	continuerPartie = 1;
	int MAX = 100, MIN = 1;

	while (continuerPartie == 1)
	{
		while (!(level > 0 && level < 4))
		{
			printf(ANSI_COLOR_RED "Choisir un niveau de difficulté compris entre 1 et 3" ANSI_COLOR_RESET "\n");
			printf("1 = entre 1 et 100\n");
			printf("2 = entre 1 et 1000\n");
			printf("3 = entre 1 et 10000\n");
			printf(ANSI_COLOR_GREEN "Votre choix: " ANSI_COLOR_RESET "\n");
			scanf("%d", &level);
			if (level == 1)
				MAX = 100;
			if (level == 2)
				MAX = 1000;
			if (level == 3)
				MAX = 10000;
		}

		srand(time(NULL));
		nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

		do
		{
			printf("Quel est le nombre mystère entre 0 et %d ? ", MAX);
			scanf("%d", &nombreEntre);
			if (nombreEntre < nombreMystere)
			{
				printf(ANSI_COLOR_YELLOW "C'est plus que %d !" ANSI_COLOR_RESET "\n", nombreEntre);
			}
			else if (nombreEntre > nombreMystere)
			{
				printf(ANSI_COLOR_MAGENTA "C'est moins que %d!" ANSI_COLOR_RESET "\n", nombreEntre);
			}
			else
			{
				printf(ANSI_COLOR_GREEN "Bravo %d est le nombre mystère bien joué !!" ANSI_COLOR_RESET "\n", nombreMystere);
			}
		} while (nombreEntre != nombreMystere);
		printf("Voulez faire une autre partie ? [O/n]\n");
		scanf("%s", &newGame);
		if (newGame == 'O' || newGame == 'o')
		{
			continuerPartie = 1;
			level = 0;
		}
		else
		{
			continuerPartie = 0;
			printf("Fin du jeux !\n");
		}
	}
	return (0);
}
