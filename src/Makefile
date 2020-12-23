##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Compilation Makefile for printf
##

LP = ../lib/my/

SRC =	./my_ls.c 						\
		./my_simple_ls.c 				\
		./my_lsd.c 						\
		./my_lsl.c 						\
		./my_lsr.c 						\
		./my_lsR.c 						\
		./my_lst.c 						\
		./my_ls_error.c 				\
		./$(LP)my_printf.c				\
		./$(LP)my_putchar.c 			\
		./$(LP)my_put_nbr.c				\
		./$(LP)my_putstr.c				\
		./$(LP)my_strlen.c 				\
		./$(LP)my_printf_char.c			\
		./$(LP)my_printf_str.c			\
		./$(LP)my_printf_nbr.c			\
		./$(LP)my_printf_bin.c			\
		./$(LP)my_printf_oct.c			\
		./$(LP)my_printf_hex.c			\
		./$(LP)my_compute_power_rec.c	\
		./$(LP)my_isneg.c				\
		./$(LP)my_atoi.c				\
		./$(LP)my_intcpy.c				\
		./$(LP)my_swap.c				\
		./$(LP)my_getnbr.c				\
		./$(LP)my_revstr.c				\
		./$(LP)my_strcpy.c				\
		./$(LP)my_strncpy.c				\
		./$(LP)my_error.c				\
		./$(LP)my_perror.c

OBJ = $(SRC:.c=.o)

CFLAGS += -Wall -I./include

NAME = my_ls

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f clean $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean all