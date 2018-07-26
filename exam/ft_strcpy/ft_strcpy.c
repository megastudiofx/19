/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 21:29:37 by abicer            #+#    #+#             */
/*   Updated: 2018/07/26 13:27:41 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return(s1);
}

int	main(void)
{
	char s2[40];
	char s1[100];

	ft_strcpy(s2, "This is tutorialspoint.com");
	ft_strcpy(s1, s2);

	printf("Final copied string : %s\n", s2);
	return(0);
}
