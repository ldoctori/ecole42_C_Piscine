NAME := libft.a
SRC_DIR := srcs/
SOURCE_FILES := ft_putchar.c \
			ft_putstr.c \
			ft_strcmp.c \
			ft_strlen.c \
			ft_swap.c
SRC := $(addprefix $(SRC_DIR), $(SOURCE_FILES))
OBJS_FILES := $(SRC:.c=.o)

FLAGS := -Wall -Wextra -Werror 
HEADER := includes/ft.h \

all: ${NAME}

$(NAME): $(OBJS_FILES)
	gcc -c $(FLAGS) $(HEADER)
	ar r $(NAME) $(OBJS_FILES)
	ranlib $(NAME)

clean:
	rm -f $(SRC_DIR)/*.o
fclean:
	rm -f $(NAME) $(SRC_DIR)/*.o
re: fclean all
.PHONY: all clean fclean re
