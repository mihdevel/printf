NAME = libftprintf.a

all: $(NAME)

.c.o:
	gcc $(FLAG) -c $(SRC)

$(NAME): ${OBJ}
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all