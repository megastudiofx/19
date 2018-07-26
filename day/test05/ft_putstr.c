/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 09:34:44 by abicer            #+#    #+#             */
/*   Updated: 2018/07/09 09:35:37 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char c);

void ft_putstr(char *str)
/* Prends en paramètre notre chaine de caractère >
Elle itère sur chacun des elements du tableau de char, pour les afficher.
Commet elle affiche ? elle appelle putchar !*/
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]); // appel de putchar avc la chaine de caractère
		index++;
	}
}
