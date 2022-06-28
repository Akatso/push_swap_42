NAME = push_swap.a

SRC = ft_push_swap.c \
      ft_utils.c \
      ft_utils2.c \
      ft_parse.c \
      ft_error.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I. -g

EXEC = push_swap

all: $(EXEC)

$(EXEC): $(OBJ)
	ar -rcs $(NAME) $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(NAME)

$(OBJ):
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) $(EXEC)

re: fclean all

.PHONY: all clean fclean re
