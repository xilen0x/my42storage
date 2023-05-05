#Sintaxis: ##target ... : dependencies ...
#			(1 tab)instructions

NAME = libft.a

# ------------------ Variables --------------
SRC := ft_isalpha.c	ft_isalnum.c ft_isdigit.c

FLAGS := -Wall -Wextra -Werror

CC := gcc

HEAD := libft.h

OBJECTS := $(SRC:.c=.o)

# ------------------ Rules ------------------
libft: %.o %.c $(OBJECTS) $(SRC) $(HEAD)
	$(CC) $(FLAGS) $(SRC)  

$(NAME): $(SRC) 

.PHONY: all clean fclean re


#clean:
#	rm -f libft *.o
