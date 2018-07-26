/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variable.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 14:50:51 by abicer            #+#    #+#             */
/*   Updated: 2018/07/05 15:55:17 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void) // Équivalent de int main ()
{
	int nombre_de_vies;
	int niveau;

	printf("Il vous reste %d vies. Vous etes au niveau %d\n", nombre_de_vies, niveau);
	printf("****BOOM HEADSHOT****\n");
	nombre_de_vies = 4;
	niveau = 1;
	printf("Il ne vous reste plus que %d vies. Vous passez au niveau %d\n", nombre_de_vies, niveau);
	return 0;
}
