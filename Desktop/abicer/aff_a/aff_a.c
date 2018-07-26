/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 18:05:48 by exam              #+#    #+#             */
/*   Updated: 2018/07/20 19:44:03 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_a(char *test)
{
	int	i;

	i = 0;
	while (test[i] != 'a' && test[i] != '\0')
		i++;
	if (test[i] == 'a')
		ft_putchar('a');
	if (test[0] == '\0')
		ft_putchar('a');
}

int		main(int argc,	char **argv)
{
	if (argc == 2)
		aff_a(argv[1]);
	else
		ft_putchar('a');
	ft_putchar('\n');
	return (0);
}
