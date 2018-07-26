#include <stdio.h>
#define ANSI_COLOR_RED	"\x1b[31m"

void ft_putstr(char *str);
int ft_atoi(char *str);

int main(void)
{
	char variable [80] = "123test654651ooivjdlijdrv";

	printf ("Texte initial %s\n", variable);
	printf("Texte atoi %d", ft_atoi(variable));
	return(0);
}
