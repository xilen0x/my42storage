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

SRC = 

SRCBONUS = 

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
OBJBONUS = $(addprefix $(OBJ_DIR), $(SRCBONUS:.c=.o))

DEPS = $(addsuffix .d, $(basename $(OBJ)))
MK = mkdir -p

CFLAGS = -Wall -Wextra -Werror

INCLUDE = -I ./

CC = cc

HEADER = libftprintf.h

# -------------------- Rules --------------------
#SRC = $(patsubst %,%.c,$(myFunctions))
#OBJS = $(patsubst %,%.o,$(myFunctions))

#Regla para construir archivos objeto a partir de los archivos fuente .c.
$(OBJ_DIR)%.o: %.c Makefile
	@echo "Compiling... $<"
	@$(MK) $(dir $@)
	@$(CC) $(CFLAGS) -MMD $(INCLUDE) -c $< -o $@

#Regla principal para construir el archivo de biblioteca principal libft.a.
all: $(NAME)

#Regla para construir el archivo de biblioteca principal libft.a utilizando 
# los archivos objeto y el archivo de encabezado.
$(NAME): $(OBJ) $(HEADER)
	@echo "Building... $@"
	ar rcs $(NAME) $(OBJ)


bonus: .bonus

.bonus: $(OBJBONUS)
		@echo "Building bonus..."
		ar rcs $(NAME) $(OBJBONUS)
		@touch .bonus


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
.PHONY: all clean fclean re bonus
