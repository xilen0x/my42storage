# variables
NAME = libft.a

SRC = main.c ft_isalpha.c ft_isalnum.c ft_isdigit.c

OBJS = main.o ft_isalpha.o ft_isalnum.o ft_isdigit.o

CFLAGS = -Wall -Wextra -Werror

CC = gcc

HEADER = libft.h

all: $(NAME)

$(NAME): libft.a
	ar rcs $(NAME) $(OBJS)

libft.a: $(OBJS)
	ar rcs $(NAME) $(OBJS)

main.o: main.c $(HEADER)
	$(CC) $(CFLAGS) -c main.c $(HEADER)

ft_isalpha.o: ft_isalpha.c $(HEADER)
	$(CC) $(CFLAGS) -c ft_isalpha.c $(HEADER)

ft_isdigit.o: ft_isdigit.c
	$(CC) $(CFLAGS) -c ft_isdigit.c

ft_isalnum.o: ft_isalnum.c $(HEADER)
	$(CC) $(CFLAGS) -c ft_isalnum.c $(HEADER)

.PHONY: all clean fclean re

clean:
	rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
