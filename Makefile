NAME = libftprintf.a
SRC_DIR = srcs/
SRC_FILES = ft_printf.c ft_parser.c ft_printer.c\
			ft_get_width.c ft_get_digit.c\
			ft_print_s.c ft_print_c.c ft_print_d.c\
			ft_print_percent.c ft_print_p.c\
			ft_utils.c

FLAGS = -Wall -Wextra -Werror -Iincludes/
SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ_FILES = $(SRC_FILES:.c=.o)
CC= gcc $(FLAGS)

all: $(NAME)

#.c.o:
#	$(CC) -c $(SRC)

$(NAME):
	$(CC) -c $(SRC)
	$(MAKE) -C libft
	mv libft/libft.a ./$(NAME)
	ar rc $(NAME) $(OBJ_FILES)

clean:
	/bin/rm -f $(OBJ_FILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all