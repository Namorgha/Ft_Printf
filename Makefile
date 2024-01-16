# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 14:09:56 by namorgha          #+#    #+#              #
#    Updated: 2022/10/27 20:09:32 by namorgha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c\
	ft_printnbr.c\
	ft_printnbr_u.c\
	ft_printstr.c\
	ft_print_hex.c\
	ft_putchar.c\

OBJ = ft_printf.o\
	ft_printnbr.o\
	ft_printnbr_u.o\
	ft_printstr.o\
	ft_print_hex.o\
	ft_putchar.o\

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	@gcc -Wall -Wextra -Werror -c $(SRC)

clean:
	@rm -f *.o

fclean: clean
	@rm -f libftprintf.a

re:	fclean all
