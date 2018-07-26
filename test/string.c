/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 16:21:53 by abicer            #+#    #+#             */
/*   Updated: 2018/07/16 16:05:27 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


int main(void)
{
	char	*ptr;
	char	*ptr2;

	ptr2 = "lol";
	ptr = "toto";
	ptr = ptr2;
	ft_putchar(ptr[0]);
	ft_putchar('\n');
	return (0);
}
