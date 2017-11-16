# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dideryck <dideryck@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/25 02:53:05 by DERYCKE           #+#    #+#              #
#    Updated: 2017/11/16 21:39:20 by dideryck         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lib

SRC = ./ft_strlen.c 	ft_putchar.c 	ft_strstr.c 	ft_atoi.c 	ft_strncmp.c 	ft_putnbr.c 	ft_strcmp.c\
		ft_memcpy.c		ft_memccpy.c 	ft_memset.c 	ft_strcat.c 	ft_isdigit.c 	ft_isalpha.c 	ft_isalnum.c\
		ft_isprint.c 	ft_toupper.c 	ft_tolower.c 	ft_isascii.c 	ft_strchr.c 	ft_strrchr.c 	ft_strnstr.c\
		ft_strncat.c 	ft_memcmp.c 	ft_memchr.c 	ft_memmove.c 	ft_strlcat.c 	ft_bzero.c 		ft_strdup.c\
		ft_strcpy.c 	ft_strncpy.c 	ft_memalloc.c 	ft_memdel.c 	ft_strnew.c		ft_strdel.c 	ft_striter.c\
		ft_strmap.c 	ft_strequ.c 	ft_strsub.c -I .

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rc libft.a ./ft_strlen.o  	ft_putchar.o 	ft_strstr.o 	ft_atoi.o 	ft_strncmp.o 	ft_putnbr.o ft_strcmp.o ft_memcpy.o ft_memccpy.o \
	ft_memset.o		ft_strcat.o		ft_isdigit.o		ft_isalpha.o	ft_isalnum.o 	ft_isprint.o	ft_toupper.o	ft_tolower.o \
	ft_isascii.o	ft_strchr.o		ft_strrchr.o	ft_strnstr.o	ft_strncat.o	ft_memcmp.o		ft_memchr.o		ft_memmove.o 	ft_strlcat.o \
	ft_bzero.o		ft_strdup.o		ft_strcpy.o		ft_strncpy.o	ft_memalloc.o	ft_memdel.o		ft_strnew.o		ft_strdel.o		ft_striter.o \
	ft_strmap.o		ft_strequ.o		ft_strsub.o
clean: 
	rm -f ft_strlen.o 	ft_putchar.o 	ft_strstr.o 	ft_atoi.o 	ft_strncmp.o 	ft_putnbr.o ft_strcmp.o ft_memcpy.o ft_memccpy.o \
	ft_memset.o		ft_strcat.o		ft_isdigit.o		ft_isalpha.o	ft_isalnum.o 	ft_isprint.o	ft_toupper.o	ft_tolower.o \
	ft_isascii.o	ft_strchr.o		ft_strrchr.o	ft_strnstr.o	ft_strncat.o	ft_memcmp.o		ft_memchr.o		ft_memmove.o	ft_strlcat.o \
	ft_bzero.o		ft_strdup.o		ft_strcpy.o		ft_strncpy.o	ft_memalloc.o	ft_memdel.o		ft_strnew.o		ft_strdel.o		ft_striter.o \
	ft_strmap.o		ft_strequ.o		ft_strsub.o

fclean: clean
	rm -rf libft.a

re: all