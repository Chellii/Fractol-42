# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/15 23:41:18 by cel-oiri          #+#    #+#              #
#    Updated: 2019/10/04 22:39:47 by cel-oiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_itoa.c \
	  ft_memccpy.c \
	  ft_putendl.c \
	  ft_strcat.c \
	  ft_striteri.c \
	  ft_strncpy.c \
	  ft_swap.c \
	  ft_listlen.c \
	  ft_memchr.c \
	  ft_putendl_fd.c \
	  ft_strchr.c \
	  ft_strjoin.c \
	  ft_strnequ.c \
	  ft_tolower.c \
	  ft_atoi.c \
	  ft_lstadd.c \
	  ft_memcmp.c \
	  ft_putnbr.c \
	  ft_strclr.c \
	  ft_strlcat.c \
	  ft_strnew.c \
	  ft_toupper.c \
	  ft_bzero.c \
	  ft_lstdel.c \
	  ft_memcpy.c \
	  ft_putnbr_fd.c \
	  ft_strcmp.c \
	  ft_strlen.c \
	  ft_strnstr.c \
	  ft_isalnum.c \
	  ft_lstdelone.c \
	  ft_memdel.c \
	  ft_putstr.c \
	  ft_strcpy.c \
	  ft_strlen2.c \
	  ft_strrchr.c \
	  ft_isalpha.c \
	  ft_lstiter.c \
	  ft_memmove.c \
	  ft_putstr_fd.c \
	  ft_strdel.c \
	  ft_strmap.c \
	  ft_strsplit.c \
	  ft_isascii.c \
	  ft_lstmap.c \
	  ft_memset.c \
	  ft_range.c \
	  ft_strdup.c \
	  ft_strmapi.c \
	  ft_strstr.c \
	  ft_isprint.c \
	  ft_memalloc.c \
	  ft_putchar_fd.c \
	  ft_sqrt.c \
	  ft_striter.c \
	  ft_strncmp.c \
	  ft_strtrim.c \
	  ft_isdigit.c \
	  ft_lstnew.c \
	  ft_putchar.c \
	  ft_sort_table.c \
	  ft_strequ.c \
	  ft_strncat.c \
	  ft_strsub.c \
	  freedchar.c \
	  get_next_line.c
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Werror -Wextra
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c $(HEADER)
	gcc $(FLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
