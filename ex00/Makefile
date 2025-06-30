# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/31 05:10:32 by dtanski           #+#    #+#              #
#    Updated: 2025/06/24 14:45:23 by dtanski          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g 

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

#TEXT COLORS
GREEN		=	\033[0;32m
RED 		=	\033[0;31m
YELLOW		=	\033[0;33m
RESET		=	\033[0m

all: $(NAME)

$(NAME):$(OBJ)
		@echo "$(RED)[ .. ] Compiling Mandatory..$(RESET)"
		@$(CC) $(CFLAGS) $(OBJ) -o $@
		@echo "$(GREEN)[ OK ]$(RESET) $(YELLOW)Mandatory Ready!$(RESET)"

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean: 
		@rm -rf $(OBJ)
		@echo "Object files removed"

fclean: clean
		@rm -rf $(NAME)
		@echo "Binary files removed"

re:		fclean all

.PHONY:	all clean fclean re
