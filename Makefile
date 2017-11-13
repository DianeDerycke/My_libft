# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/25 02:53:05 by DERYCKE           #+#    #+#              #
#    Updated: 2017/11/13 22:08:13 by dideryck         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lib

SRC = ./ft_strlen.c 	ft_putchar.c 	ft_strstr.c 	ft_atoi.c 	ft_strncmp.c 	ft_putnbr.c 	ft_strcmp.c\
		ft_memcpy.c		ft_memccpy.c 	ft_memset.c 	ft_strcat.c 	ft_isdigit.c 	ft_isalpha.c 	ft_isalnum.c\
		ft_isprint.c 	ft_toupper.c 	ft_tolower.c	-I .

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc libft.a ./ft_strlen.o  	ft_putchar.o 	ft_strstr.o 	ft_atoi.o 	ft_strncmp.o 	ft_putnbr.o ft_strcmp.o ft_memcpy.o ft_memccpy.o \
	ft_memset.o		ft_strcat.o		ft_isdigit.o		ft_isalpha.o	ft_isalnum.o 	ft_isprint.o	ft_toupper.o	ft_tolower.o

clean: 
	rm -f ft_strlen.o 	ft_putchar.o 	ft_strstr.o 	ft_atoi.o 	ft_strncmp.o 	ft_putnbr.o ft_strcmp.o ft_memcpy.o ft_memccpy.o \
	ft_memset.o		ft_strcat.o		ft_isdigit.o		ft_isalpha.o	ft_isalnum.o 	ft_isprint.o	ft_toupper.o	ft_tolower.o

fclean: clean
	rm -rf libft.a

re: all