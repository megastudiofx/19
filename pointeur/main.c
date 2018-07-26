/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 17:17:43 by abicer            #+#    #+#             */
/*   Updated: 2018/07/08 18:14:54 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ptr);
void	ft_putchar(int ptr);
void	ft_putaddr(void *ptr);

int	main(void)
{
	int		a;
	int		b;

	a = 3;
	b = 42;
	ft_putaddr(&a);
	ft_putchar(' ');
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putaddr(&b);
	ft_putchar(' ');
	ft_putnbr(b);
	ft_putchar('\n');
	return (0);
}
