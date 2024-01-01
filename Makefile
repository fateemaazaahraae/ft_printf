# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 17:03:10 by fbazaz            #+#    #+#              #
#    Updated: 2023/12/03 13:33:59 by fbazaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILE = ft_print_address.c ft_print_char.c ft_print_hexa_lower.c ft_print_hexa_upper.c ft_print_int.c \
		ft_print_per.c ft_print_str.c ft_print_unsigned.c ft_printf.c ft_putchar.c

BFILE = $(CFILE:.c=.o)

all : $(NAME)

$(NAME) : $(BFILE)
		ar rc $(NAME) $?

clean : 
		rm -f $(BFILE)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re