# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/25 02:53:05 by DERYCKE           #+#    #+#              #
#    Updated: 2017/11/12 16:43:05 by dideryck         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lib

SRC = ./ft_strlen.c 	ft_putchar.c 	ft_strstr.c 	ft_atoi.c 	ft_strncmp.c 	ft_putnbr.c 	ft_strcmp.c	-I .

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc libft.a ./ft_strlen.o  	ft_putchar.o 	ft_strstr.o 	ft_atoi.o 	ft_strncmp.o 	ft_putnbr.o ft_strcmp.o

clean: 
	rm -f ft_strlen.o 	ft_putchar.o 	ft_strstr.o 	ft_atoi.o 	ft_strncmp.o 	ft_putnbr.o ft_strcmp.o

fclean: clean
	rm -rf libft.a

re: all
