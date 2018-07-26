/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factorielle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 00:28:09 by abicer            #+#    #+#             */
/*   Updated: 2018/07/08 00:28:11 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main (void)
{
	int nombre1;
	int result;

	result = '0';
	nombre1 = '0';
	printf("Calculer le factorielle d'un nombre\n");
	printf("Nombre ?");
	scanf("%d", &nombre1);
	result = nombre1 * nombre1;
	printf("votre résultat est %d", result);
	return(0);
}
