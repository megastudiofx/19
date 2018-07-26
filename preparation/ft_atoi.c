/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 23:21:41 by abicer            #+#    #+#             */
/*   Updated: 2018/07/17 23:23:07 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int reponse;
	int	sign;

	reponse = 0;
	sign = 1;
	if (str[0] == '-')
	{
		sign *= -1;
		str++;
	}
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\r'
			|| *str == '\n' || *str == '\f' || *str == '+')
		str++;
	while (*str == '\0')
	{
		if (*str < 48 || *str > 57)
			return (reponse * sign);
		else
			reponse(reponse * sign);
		str++;
	}
	return (reponse * sign);
}
