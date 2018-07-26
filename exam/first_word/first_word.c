/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 15:30:29 by abicer            #+#    #+#             */
/*   Updated: 2018/07/26 16:45:16 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	 ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int number;

	number = 0;
	if(nb < 0)
	{
		ft_putchar('-');
		number = nb * -1;
	}
	else
		number = nb;
	if (number > 9)
		ft_putnbr(nb = number / 10);
	ft_putchar(number % 10 + '0');
}

void	first_word(char	*str)
{
	int i;

	i = 0;
	while(str[i] <= 32 && str[i] != 127 && str[i] != '\0')
		i++;

	while(str[i] && !(str[i]<= 32 && str[i] != 127))
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if(argc == 2)
		first_word(argv[1]);
	else
		ft_putchar('\n');
	return(0);
}
