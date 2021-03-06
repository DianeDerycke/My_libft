# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: DERYCKE <DERYCKE@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/25 02:53:05 by DERYCKE           #+#    #+#              #
#    Updated: 2018/03/21 10:35:54 by DERYCKE          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_strlen 	ft_putchar 	ft_strstr 	ft_atoi 	ft_strncmp 	ft_putnbr 	ft_strcmp \
		ft_memcpy	ft_memccpy 	ft_memset 	ft_strcat 	ft_isdigit 	ft_isalpha 	ft_isalnum \
		ft_isprint 	ft_toupper 	ft_tolower 	ft_isascii 	ft_strchr 	ft_strrchr 	ft_strnstr \
		ft_strncat 	ft_memcmp 	ft_memchr 	ft_memmove 	ft_strlcat 	ft_bzero 	ft_strdup \
		ft_strcpy 	ft_strncpy 	ft_memalloc ft_memdel 	ft_strnew	ft_strdel 	ft_striter \
		ft_strmap 	ft_strequ 	ft_strsub 	ft_strjoin 	ft_strtrim 	ft_putstr	ft_strsplit \
		ft_itoa		ft_putendl	ft_putchar_fd	ft_putstr_fd	ft_putendl_fd	ft_putnbr_fd \
		ft_strmapi	ft_lstnew	ft_lstdelone	ft_lstdel 		ft_lstadd	ft_lstiter	ft_lstmap \
		ft_strclr	ft_striteri	ft_strnequ	ft_strndup	ft_pause	ft_sort_integer_table \
		ft_strlen_table	ft_swap	ft_is_space	ft_double_free	ft_push_back	ft_init_dblist \
		ft_sort_lst
SRC = $(addsuffix .c, $(FILES))
OBJ = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	gcc -c -Wall -Werror -Wextra -I . -o $@ $< 

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -rf libft.a

re: fclean all