NAME = libft.a

SRC = main.c ft_isalpha.c	ft_isalnum.c ft_isdigit.c

OBJS = main.o ft_isalpha.o	ft_isalnum.o ft_isdigit.o

CFLAGS = -Wall -Wextra -Werror

CC = gcc

HEAD = libft.h

all: libft

libft: $(OBJS)
	$(CC) $(CFLAGS) -o libft $(OBJS)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c $(HEAD)

ft_isalpha.o: ft_isalpha.c
	$(CC) $(CFLAGS) -c ft_isalpha.c

ft_isdigit.o: ft_isdigit.c
	$(CC) $(CFLAGS) -c ft_isdigit.c

ft_isalnum.o: ft_isalnum.c	
	$(CC) $(CFLAGS) -c ft_isalnum.c $(HEAD)

clean:
	rm -f libft *.o


