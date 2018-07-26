#include <stdio.h>

int	main(void)
{
	int tab[10];
	int tab2[10];
	int *tabptr[2];

	tabptr[0] = tab;
	tabptr[1] = tab2;
	tabptr[1][3] = 42;
	*(*(tabptr + 1) + 3) = 42;
	printf("%d\n", tab2[3]);
	return (0);
}
