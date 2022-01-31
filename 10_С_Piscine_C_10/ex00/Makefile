# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/02 16:50:41 by ldoctori          #+#    #+#              #
#    Updated: 2021/08/03 16:43:46 by ldoctori         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ft_display_file
FLAGS	= -Wall -Werror -Wextra -o
SRC_DIR := ./srcs/
OBJ_DIR	= ./obj/
SRC_FILES := main.c \
			ft_display_file.c \
			ft_putstr.c \
			ft_putchar.c

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ_FILES = $(SRC:.c=.o)

HEADER := include/ft.h


all: $(OBJ_FILES) $(NAME)

$(NAME): $(OBJ_FILES)
	gcc $(FLAGS) $(NAME) $(OBJ_FILES) -I $(HEADER)

clean:
	rm -f $(SRC_DIR)/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

