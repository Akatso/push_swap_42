SRC += ft_sort2.c
SRC += ft_sort1.c
SRC += ft_parsetab.c
SRC += ft_papb.c
SRC += ft_push_swap.c
SRC += ft_radix.c
SRC += ft_rrr.c
SRC += ft_rr.c
SRC += ft_ss.c
SRC += ft_struct.c
SRC += ft_utils1.c
SRC += ft_utils2.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I. -g

EXEC = push_swap

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ) 

$(OBJ):
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) $(EXEC)

run:
	./$(EXEC) "5 4 2 3 1"

re: fclean all

.PHONY: all clean fclean re

