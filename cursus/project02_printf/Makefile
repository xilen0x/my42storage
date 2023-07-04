# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: castorga <castorga@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/09 11:59:47 by castorga          #+#    #+#              #
#    Updated: 2023/06/16 10:20:38 by castorga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------------- Variables ---------------------
NAME = libftprintf.a

OBJ_DIR = ./obj/

SRC = ft_printf.c ft_numbers.c ft_words.c

OBJS = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

DEPS = $(addsuffix .d, $(basename $(OBJS)))
MK = mkdir -p

CFLAGS	= -Wall -Wextra -Werror

INCLUDE = -I ./

RM	= rm -rf

CC	= gcc

# -------------------- Rules --------------------
$(OBJ_DIR)%.o: %.c Makefile
	@echo "Compiling... $<"
	@$(MK) $(dir $@)
	@$(CC) $(CFLAGS) -MMD $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Building... $@"
	ar rcs $(NAME) $(OBJS)

-include $(DEPS)

# -------------------- Clean --------------------
clean:
	$(RM) $(OBJ_DIR)

fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re
