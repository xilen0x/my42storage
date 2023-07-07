# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: castorga <castorga@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/30 15:08:13 by castorga          #+#    #+#              #
#    Updated: 2023/06/30 15:08:15 by castorga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------------- Variables ---------------------
NAME = libftprintf.a

OBJ_DIR = ./obj/

SRC = ft_printf.c 

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

DEPS = $(addsuffix .d, $(basename $(OBJ)))
MK = mkdir -p

CFLAGS = -Wall -Wextra -Werror

INCLUDE = -I ./

CC = cc

HEADER = libftprintf.h

# -------------------- Rules --------------------
#SRC = $(patsubst %,%.c,$(myFunctions))
#OBJS = $(patsubst %,%.o,$(myFunctions))

#Construccion de archivos objeto a partir de los archivos fuente .c.
$(OBJ_DIR)%.o: %.c Makefile
	@echo "Compiling... $<"
	@$(MK) $(dir $@)
	@$(CC) $(CFLAGS) -MMD $(INCLUDE) -c $< -o $@

#Construccion de el archivo de biblioteca principal libft.a.
all: $(NAME)

#Construccion de el archivo de biblioteca principal libft.a utilizando 
# los archivos objeto y el archivo de encabezado.
$(NAME): $(OBJ) $(HEADER)
	@echo "Building... $@"
	ar rcs $(NAME) $(OBJ)

-include $(DEPS)

# -------------------- Clean --------------------
clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

#Al declarar estos objetivos como .PHONY, se garantiza que las reglas
# asociadas se ejecuten independientemente de si hay un archivo con el
# mismo nombre o no.
.PHONY: all clean fclean re
