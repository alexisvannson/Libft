CFILES = $(wildcard *.c)
  
OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME) clean

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES) 

clean:
	rm -f $(OFILES)

fclean:  
	clean rm -f $(NAME)

re: fclean $(NAME)

.PHONY:  all clean fclean re