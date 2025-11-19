# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/19 22:53:34 by zcadinot          #+#    #+#              #
#    Updated: 2025/11/19 22:55:28 by zcadinot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.c
OBJ = $(SRC:src/%.c=build/%.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

build/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f build/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all
