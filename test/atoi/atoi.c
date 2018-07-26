/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 00:09:56 by abicer            #+#    #+#             */
/*   Updated: 2018/07/23 00:10:07 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Inclut la bibliothèque standard pour les entrées/sorties en mode terminal
#include <stdio.h>

/** Point d'entré du programme */
int main(int argc, char* argv[]) {

    /* Affiche l'aide si aucun paramètre */
    if (argc == 1) {
        printf("Usage: %s NOMBRE\n", argv[0]);
        puts("Affiche le nombre passé en paramètre sur la sortie standard.");
        return 0;
    }

    // Affiche le nombre passé en paramètre
    printf("Vous avez saisi : %d\n", atoi(argv[1]));

    // Pas d'erreur
    return 0;
}
