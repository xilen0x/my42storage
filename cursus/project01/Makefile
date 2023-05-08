# - Makefile library libft -
# ----------------- Variables ---------------------
NAME = libft.a

myFunctions = ft_isalpha ft_isdigit ft_isalnum \
ft_isascii ft_isprint #ft_strlen \
ft_memset ft_bzero ft_memcpy \
ft_memmove ft_strlcpy ft_strlcat \
ft_toupper ft_tolower ft_strchr \
ft_strrchr ft_strncmp ft_memchr \
ft_memcmp ft_strnstr ft_atoi \
ft_calloc ft_strdup

CFLAGS = -Wall -Wextra -Werror

CC = gcc

HEADER = libft.h


# -------------------- Rules --------------------
SRC = $(patsubst %,%.c,$(myFunctions))
OBJS = $(patsubst %,%.o,$(myFunctions))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)



# -------------------- Clean --------------------
.PHONY: all clean fclean re

clean:
	rm -f $(NAME) $(OBJS) libft.h.gch

fclean: clean

re: fclean all
