# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldoctori <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/02 16:50:41 by ldoctori          #+#    #+#              #
#    Updated: 2021/08/04 17:34:05 by ldoctori         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := do-op
LFLAGS	= -Wall -Werror -Wextra -o
SRC_DIR := ./srcs/
OBJ_DIR	= ./obj/
SRC_FILES := main.c \
			ft_atoi.c \
			options.c \
			ft_strcmp.c \
			ft_putnbr.c \
			ft_putstr_norm.c \

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ_FILES = $(SRC:@.c=.o)

HEADER := include/ft.h

all: $(OBJ_FILES) $(NAME)

$(NAME): $(OBJ_FILES)
	@(gcc $(LFLAGS) $(NAME) $(OBJ_FILES) -I $(HEADER))

clean:
	@rm -f $(SRC_DIR)/*.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
