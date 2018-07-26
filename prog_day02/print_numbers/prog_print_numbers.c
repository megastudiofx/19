/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 16:07:15 by abicer            #+#    #+#             */
/*   Updated: 2018/07/06 23:10:29 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int		number;

	number = '9';
	while (number >= '0')
	{
		ft_putchar(number);
		number--;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
