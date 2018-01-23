NAME = Sully
CC = clang
CFLAGS = -Wall -Wextra -Werror

SRC = Sully.c
OBJ = Sully.o

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^
	@echo "Compiled"

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
