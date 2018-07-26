/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 09:37:03 by abicer            #+#    #+#             */
/*   Updated: 2018/07/10 21:17:04 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define ANSI_COLOR_RED	"\x1b[31m"

void ft_putchar(char c);
void ft_putstr(char *str);
void ft_putnbr(int nb);
void ft_putaddr(void *ptr);
int ft_atoi(char *str);
char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(int argc, char const *argv[])
{
	char str1[] = "Hello je suis une chaine de caractère !\n";
	char str2[] = "Bonjour veux dire hello en anglais\n";
	char str3[] = "Goeidag en néerlandais !\n";
	char texte[8] = "1234567";
	char texte_copie[8];
	char dest[10];
	char src[10] = "987654321";
	char atoi[9] = "123test4";

	printf ("\033[34;01m-ft_putstr-\033[00m\n");
	ft_putstr(str1);
	ft_putstr(str2);
	ft_putstr(str3);
	printf("\n");

	printf ("\033[34;01m-ft_putnbr-\033[00m\n");
	ft_putnbr(-2147483648);
	printf("\n\n");

	printf ("\033[34;01m-ft_atoi-\033[00m\n");
	printf("String initial %s\n", atoi);
	printf("String atoi %d\n", ft_atoi(atoi));
	printf("\n\n");

	printf ("\033[34;01m-ft_strcpy-\033[00m\n");
	ft_strcpy(texte_copie, texte);
	printf("Texte initial : %s\n", texte);
	printf("Texte Copie : %s\n", texte_copie);
	printf("\n");

	printf ("\033[34;01m-ft_strncpy-\033[00m\n");
	ft_strncpy(dest, src, sizeof(dest));
	texte_copie[5] = '\0';
	puts (dest);
	printf("\n");

	return (0);
}
