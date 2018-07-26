/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 22:12:29 by abicer            #+#    #+#             */
/*   Updated: 2018/07/25 23:21:30 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		write(1, argv[1], 4);
		ft_putstr("\n");
		write(1, &argv[1][2], 1);
	}
	else
		ft_putstr("error");
}
