SRC = ft_sort2.c \
	  ft_sort1.c \
	  ft_parsetab.c \
	  ft_papb.c \
	  ft_push_swap.c \
	  ft_radix.c \
	  ft_rrr.c \
	  ft_rr.c \
	  ft_ss.c \
	  ft_struct.c \
	  ft_utils1.c \
	  ft_utils2.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I. -g

EXEC = push_swap

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ) 

%.o: $.c
	$(CC) $(CFLAGS) $< -c -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) $(EXEC)

run:
	./$(EXEC) "5 4 2 3 1"

re: fclean all

.PHONY: all clean fclean re

