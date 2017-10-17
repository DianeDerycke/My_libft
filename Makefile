# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: DERYCKE <DERYCKE@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/25 02:53:05 by DERYCKE           #+#    #+#              #
#    Updated: 2017/09/25 04:26:08 by DERYCKE          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lib

SRC = ./ft_bzero.c 		ft_memset.c 	ft_strlen.c 	ft_memcpy.c 	-I libft.h

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc libft.a ./ft_bzero.o	ft_memset.o 	ft_memcpy.o 	ft_strlen.o

clean: 
	rm -f ft_memset.o ft_bzero.o ft_memset.o 	ft_memcpy.o 	ft_strlen.o

fclean: clean
	rm -rf libft.a

re: all
