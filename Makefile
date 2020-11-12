# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cel-oiri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/25 00:12:27 by cel-oiri          #+#    #+#              #
#    Updated: 2019/12/27 17:41:58 by cel-oiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
SRC =	main.c \
		color.c \
		draw_fract.c \
		equat_zoom.c \
		fract_algo.c \
		julia.c \
		keys.c \
		mlx_funct.c \
		mandel_burship.c \
		mouse.c \
		mandelbrot_vn.c \
		menu.c \
		mouse_press_menu.c \
		mouse_move.c \
		menu_xn_color.c
SRC_DIR = ./src
OBJ_DIR = ./obj
OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))
C = gcc
FLAGS = -Wall -Werror -Wextra
LIB = -L./libft -lft -lmlx -framework OpenGL -framework AppKit
LIBFT = libft
LFT = lft
INC = -I ./
LIBFT_DIR = ./libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a
HEADER = fractol.h

all: $(NAME)

$(LIBFT_LIB):
	make -C $(LIBFT)

$(NAME): $(LIBFT_LIB) $(OBJ)
	$(C) $(FLAGS) $(INC) -o $(NAME) $(OBJ) $(LIB)

$(OBJ): $(OBJ_DIR)/%.o : $(SRC_DIR)/%.c $(HEADER) | $(OBJ_DIR)
	$(C) $(FLAGS) -o $@ -c $< $(INC)

$(OBJ_DIR):
	@-mkdir $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
