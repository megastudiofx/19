/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 21:48:47 by abicer            #+#    #+#             */
/*   Updated: 2018/07/25 22:06:54 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		letter_count(char c)
{
	int	repeat;

	if(c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if(c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return(repeat);
}

int	main(int argc, char **argv)
{
	int repeat;

	if (argc == 2)
	{
		while(*argv[1])
		{
			repeat = letter_count(*argv[1]);
			while (repeat--)
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	else
		ft_putstr("Error\n");
	return(0);
}
