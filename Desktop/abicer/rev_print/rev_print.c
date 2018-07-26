/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 19:56:58 by exam              #+#    #+#             */
/*   Updated: 2018/07/20 20:22:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rev_print(char *test)
{
	int	i;

	i = 0;
	while (test[i] != '\0')
		i++;
	i = i - 1;
	while(i >= 0)
	{
		ft_putchar(test[i]);
		i--;
	}
}

int		main(int argc,	char **argv)
{
	if (argc == 2)
		rev_print(argv[1]);
	ft_putchar('\n');
	return (0);
}
