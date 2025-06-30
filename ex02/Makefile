# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/31 05:10:32 by dtanski           #+#    #+#              #
#    Updated: 2025/06/04 19:08:56 by dtanski          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = globalBankster

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -I $(INC_DIR)

SRC_DIR = src/
INC_DIR = inc/

SRC = src/Account.cpp \
		src/tests.cpp \
		
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

src/%.o: src/%.cpp
		$(CC) $(CFLAGS) -o $@ -c $<

clean: 
		@rm -rf $(OBJ)
		@echo "Object files removed"

fclean: clean
		@rm -rf $(NAME)
		@echo "Binary files removed"

re:		fclean all

.PHONY:	all clean fclean re
