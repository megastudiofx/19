/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 20:12:44 by abicer            #+#    #+#             */
/*   Updated: 2018/07/18 20:19:59 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int	main(void)
{
	t_list *list;

	list = NULL;

		list = add_link(list, "toto\n")
		list = add_link(list, "tata\n")
		list = add_link(list, "tata\n")

		print_list(list);

		return (0);
}
