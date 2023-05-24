# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: castorga <castorga@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/09 11:59:47 by castorga          #+#    #+#              #
#    Updated: 2023/05/09 11:59:51 by castorga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# falta modificar este make para que actualice solo la funcion que se editó.

# ----------------- Variables ---------------------
NAME = libft.a

myFunctions = ft_isalpha ft_isdigit ft_isalnum \
ft_isascii ft_isprint ft_strlen \
ft_memset ft_bzero ft_memcpy \
ft_memmove ft_strlcpy ft_strlcat \
ft_toupper ft_tolower ft_strchr \
ft_strrchr ft_strncmp ft_memchr \
ft_memcmp ft_strnstr ft_atoi \
ft_calloc ft_strdup ft_substr \
ft_strjoin ft_strtrim

CFLAGS = -Wall -Wextra -Werror

CC = gcc

HEADER = libft.h


# -------------------- Rules --------------------
SRC = $(patsubst %,%.c,$(myFunctions))
OBJS = $(patsubst %,%.o,$(myFunctions))

all: $(NAME)

$(NAME): 
	$(CC) -I $(CFLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJS)



# -------------------- Clean --------------------
.PHONY: all clean fclean re

clean:
	rm -f $(NAME) $(OBJS) libft.h.gch

fclean: clean

re: fclean all
