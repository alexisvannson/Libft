CFILES = $(wildcard *.c)
OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror
CC = gcc
NAME = libft.a

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
