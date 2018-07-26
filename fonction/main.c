#include <stdio.h>
#include "bsq.h"

int	main(void)
{

	ft_putchar('A');
	ft_putchar('\n');
	ft_putstr("Test putstr: Chaine de caractère\n");
	printf("strlen de \"123456789\" = %d\n", ft_strlen("123456789"));
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(-50);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(5);
	ft_putchar('\n');
	ft_putnbr(5492);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	printf("Difference ASCII STRCMP : %d\n", ft_strcmp("b", "B")); // difference ASCII des 2variables
	return (0);
}
