#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void) 
{
	int age;
	int autorisation;

	age = 0;
	printf("Quel age as-tu ? ");
	scanf("%d", &age);
	autorisation = (age >= 18) ? 1 : 0;
	printf("%d\n", autorisation);
	if (autorisation == 1)
	{
		printf("Alors tu es majeur !\n");
	}
	else if (age < 1)
	{
		printf("tu es pas née");
	}
	else
	{
		printf("Tu es mineur !\n");
	}
}
