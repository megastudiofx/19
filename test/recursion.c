/* test factorielle */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return(0);
	if (!nb)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
int main(void)
{
	printf("%d", ft_recursive_factorial(5));
	return(0);
}
