NAME = catfic

CC = gcc
CFLAGS= -Wall -Werror -Wextra
SRC   = catfic.c

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(SRC) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
