/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:00:08 by abicer            #+#    #+#             */
/*   Updated: 2018/07/26 14:58:24 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		reponse;
	int		sign;

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
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
			return (reponse * sign);
		else
			reponse = reponse * 10 + (*str - 48);
		str++;
	}
	return (reponse * sign);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char a[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";// -5234
	printf("%d\n",ft_atoi(a));//
	return(0);
}
