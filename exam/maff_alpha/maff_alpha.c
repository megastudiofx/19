/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 10:58:05 by abicer            #+#    #+#             */
/*   Updated: 2018/07/25 11:46:58 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Methode table ASCII

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_alpha(void)
{
	int i;

	i = 97; // 97 = a
	while (i != 90)
	{
		ft_putchar(i);
		i = i - 31; //  97 - 31 = B
		if(i != 90) // si i == 90 alors stop la condition et stop la boucle
		{
			ft_putchar(i);
			i = i + 33; // 97 + 33 = c
		}
	}
	ft_putchar(90);
}

int		main(void)
{
	maff_alpha();
	return(0);
}
