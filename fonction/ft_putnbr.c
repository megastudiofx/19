/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 21:16:30 by abicer            #+#    #+#             */
/*   Updated: 2018/07/23 15:38:44 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putnbr(int nb)
{
	unsigned	int	temp;

	if (nb < 0)
	{
		ft_putchar('-');
		temp = nb * -1;
	}
	else
		temp = nb;
	if (temp > 9)
		ft_putnbr(temp / 10);
	ft_putchar(temp % 10 + '0');
}
