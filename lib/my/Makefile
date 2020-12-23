##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile lib
##

MY	=	lib/my/

INC = 	-include ./include/my.h

SRC	=	my_printf.c				\
		my_putchar.c 			\
		my_put_nbr.c			\
		my_putstr.c				\
		my_strlen.c 			\
		my_printf_char.c		\
		my_printf_str.c			\
		my_printf_nbr.c			\
		my_printf_bin.c			\
		my_printf_oct.c			\
		my_printf_hex.c			\
		my_compute_power_rec.c	\
		my_isneg.c				\
		my_atoi.c				\
		my_intcpy.c				\
		my_swap.c				\
		my_getnbr.c				\
		my_revstr.c				\
		my_strcpy.c				\
		my_strncpy.c			\
		my_error.c

OBJ = $(SRC:.c=.o)

LIB = -L ./lib -lmy

CFLAGS += -Wall -Wextra -g

NAME = libmy.a

$(NAME):        $(OBJ)
	ar rc libmy.a $(OBJ)
	cp libmy.a ../
	cp my.h ../../include

all:	$(NAME)

clean:
		rm -f clean $(OBJ)

fclean: clean
		rm -f $(NAME)

re:	fclean all