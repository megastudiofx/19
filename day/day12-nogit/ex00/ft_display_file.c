/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 15:30:47 by abicer            #+#    #+#             */
/*   Updated: 2018/07/19 16:53:26 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_display_file.h"
#define BUF_SIZE 4096

void	show(char *file)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(file, O_RDONLY);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
}

int		main(int argc, char *argv[])
{
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (argc <= 1)
		write(2, "File name missing.\n", 19);
	else
		show(argv[1]);
	return (0);
}
