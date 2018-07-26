# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abicer <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/19 11:02:41 by abicer            #+#    #+#              #
#    Updated: 2018/07/19 16:26:50 by abicer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

PROG = ft_display_file.c

LIB = libft.a

FLAG = -Wextra -Werror -Wall

SRCS = srcs/ft_putchar.c  srcs/ft_putstr.c

HEADER = includes

all: $(NAME)

$(NAME): 
	gcc $(FLAG) -c $(SRCS) -I $(HEADER)
	ar rc $(LIB) *.o
	ranlib $(LIB)
	gcc $(FLAG) -o $(NAME) $(PROG) -L. -lft
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(LIB) $(NAME)

re: fclean all
