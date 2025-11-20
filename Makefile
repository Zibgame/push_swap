# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 22:02:03 by zcadinot          #+#    #+#              #
#    Updated: 2025/11/20 22:14:03 by zcadinot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = push_swap

SRC_DIR     = src
INC_DIR     = includes
LIB_DIR   	= library

LIBFT_DIR   = $(LIB_DIR)/libft
PRINTF_DIR  = $(LIB_DIR)/ft_printf
GNL_DIR     = $(LIB_DIR)/get_next_line

LIBFT       = $(LIBFT_DIR)/libft.a
PRINTF      = $(PRINTF_DIR)/libftprintf.a
GNL         = $(GNL_DIR)/get_next_line.a

SRC         = main.c \
			  src/stack/node_utils1.c \
			  src/stack/node_utils2.c \
			  src/parsing/parse_arg.c \
			  src/ops/swap.c

OBJ         = $(SRC:.c=.o)

CC          = cc
CFLAGS = -Wall -Wextra -Werror -I.

all: $(LIBFT) $(PRINTF) $(GNL) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(PRINTF) $(GNL) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)

$(PRINTF):
	make -C $(PRINTF_DIR)

$(GNL):
	make -C $(GNL_DIR)

clean:
	rm -f $(OBJ)
	make clean -C $(LIBFT_DIR)
	make clean -C $(PRINTF_DIR)
	make clean -C $(GNL_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)
	make fclean -C $(PRINTF_DIR)
	make fclean -C $(GNL_DIR)

re: fclean all

.PHONY: all clean fclean re

