# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/27 11:20:42 by etermeau          #+#    #+#              #
#    Updated: 2015/05/27 11:20:46 by etermeau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIB = libft/

HEADER = includes/

DIRSRC = srcs/

FLAGS = -Wall -Wextra -Werror

SRC = main.c \
	  error.c \
	  ft_list.c \
	  opt_swap.c \
	  opt_push.c \

OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@make -s -C $(LIB)
	@gcc $(FLAGS) -o $(NAME) $^ -L$(LIB) -lft -g
	@echo "\033[5;32m$(NAME) Successfully $(STATE)\033[0m"

%.o: $(DIRSRC)%.c
	@gcc $(FLAGS) -o $@ -c $< -I$(LIB)$(HEADER) -I$(HEADER)

clean:
	@rm -f $(OBJ)
	@make clean -s -C $(LIB)

fclean: clean
	@rm -f $(NAME)
	@make fclean -s -C $(LIB)

re: fclean all
