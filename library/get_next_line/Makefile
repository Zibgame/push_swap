NAME	= get_next_line.a
CC		= clang
CFLAGS	= -Wall -Wextra -Werror -I.
RM		= rm -f

SRC		= get_next_line.c get_next_line_utils.c
OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c get_next_line.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

