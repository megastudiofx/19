/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 18:39:22 by abicer            #+#    #+#             */
/*   Updated: 2018/07/24 18:49:00 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2 [i];
		i++;
	}
	s1[i] = s2[i];
	return (s1);
}

#include <stdio.h>

int		main(void)
{
	char str1[] = "flavio";
	char str2[] = "Gaucho";

	printf("STR 1 = %s\n", str1);
	printf("STR 2 = %s\n", str2);
	ft_strcpy(str1, str2);
	printf("STR 1 = %s\n", str1);
	printf("STR 2 = %s\n", str2);
	return (0);
}
