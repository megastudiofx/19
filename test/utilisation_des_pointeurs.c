#include <stdio.h>

void	fct(int *a)
{
	*a = 12;
}

int	main(void)
{
	int a;
	int ptr;

	*ptr = &a;
	a = 11;
	fct(&a);
	printf("%d\n", a);
	return (0);
}
