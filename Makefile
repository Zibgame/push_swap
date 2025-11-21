# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 22:02:03 by zcadinot          #+#    #+#              #
#    Updated: 2025/11/21 14:41:10 by zcadinot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = push_swap

SRC_DIR     = src
OBJ_DIR     = obj
INC_DIR     = includes
LIB_DIR     = library

LIBFT_DIR   = $(LIB_DIR)/libft
PRINTF_DIR  = $(LIB_DIR)/ft_printf
GNL_DIR     = $(LIB_DIR)/get_next_line

LIBFT       = $(LIBFT_DIR)/libft.a
PRINTF      = $(PRINTF_DIR)/libftprintf.a
GNL         = $(GNL_DIR)/get_next_line.a

SRC         = main.c \
			  src/stack/node_utils1.c \
			  src/stack/node_utils2.c \
			  src/stack/init_stack.c \
			  src/parsing/parse_arg.c \
			  src/parsing/parse_utils.c \
			  src/stack/is_sorted.c \
			  src/utils/ft_atol.c \
			  src/utils/free_stack.c \
			  src/ops/swap.c

OBJ         = $(SRC:%.c=$(OBJ_DIR)/%.o)

CC          = cc
CFLAGS      = -Wall -Wextra -Werror -I.

all: $(OBJ_DIR) $(LIBFT) $(PRINTF) $(GNL) $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	mkdir -p $(OBJ_DIR)/src
	mkdir -p $(OBJ_DIR)/src/stack
	mkdir -p $(OBJ_DIR)/src/parsing
	mkdir -p $(OBJ_DIR)/src/utils
	mkdir -p $(OBJ_DIR)/src/ops

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(PRINTF) $(GNL) -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(PRINTF):
	make -C $(PRINTF_DIR)

$(GNL):
	make -C $(GNL_DIR)

clean:
	rm -rf $(OBJ_DIR)
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
