/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 21:40:17 by abicer            #+#    #+#             */
/*   Updated: 2018/07/26 22:30:12 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int number;

	number = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		number = nb * -1;
	}
	else
		number = nb;
	if (number > 10)
		ft_putnbr(nb = number / 10);
	ft_putchar(number % 10 + '0');
}

void	ft_search_replace(char *str1, char *str_default2, char *str_replace3)
{
	int i;

	if(str_default2[1] != '\0' || str_replace3[1] != '\0')
		ft_putchar('\n');
	else
	{
	i = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] == str_default2[0])
			str1[i] = str_replace3[0];
		ft_putchar(str1[i]);
		i++;
	}
	ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	if(argc == 4)
		ft_search_replace(argv[1], argv[2], argv[3]);
	else
		ft_putchar('\n');
	return (0);
}
