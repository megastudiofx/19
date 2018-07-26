/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 17:05:31 by abicer            #+#    #+#             */
/*   Updated: 2018/07/09 13:41:21 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	float resultat;
	float nombre1;
	int nombre2;

	resultat = 0;
	nombre1 = 0;
	nombre2 = 0;
	printf("Entrez le nombre 1 : ");
	scanf("%f", &nombre1);
	printf("Entrez le nombre 2 : ");
	scanf("%d", &nombre2);
	resultat = nombre1 % nombre2;
	printf("La réponse est %f\n", resultat);
	resultat = resultat + 1;
	printf("Votre réponse finale +1 est %f\n", resultat);
/*	while(resultat < 50)
	{
		resultat++;
		printf ("%d", resultat);
		printf (" ");
	}*/
	return (0);
}
