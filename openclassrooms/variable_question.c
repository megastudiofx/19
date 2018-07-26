/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variable.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 14:50:51 by abicer            #+#    #+#             */
/*   Updated: 2018/07/05 16:54:56 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void) // Équivalent de int main ()
{
	int age = 0; // initialise variable a 0

	printf("Quel age avez-vous ? ");
	scanf("%d", &age);
	printf("Parfait vous avez %d ans!\n", age);
	return 0;
}
