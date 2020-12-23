/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** Include file containing all the necessary prototypes.
*/

#include <stdarg.h>

void my_putchar(char c);

void my_put_nbr(int nb);

void my_putstr(char *str);

void my_printf_str(va_list *my_list);

void my_printf_char(va_list *my_list);

void my_printf_nbr(va_list *my_list);

int my_printf(char *src, ...);

int my_printf_bin(va_list *my_list);

int my_printf_oct(va_list *my_list);

void my_printf_hex(va_list *my_list);

int my_swap(int a, int b, int *arr);

int *my_intcpy (int *dest, int const *src, int n);

int my_strlen(char const *str);

int my_getnbr(char *src);

int my_atoi(char *s);

char *my_revstr(char *str);

char *my_strcpy (char *dest, char const *src);

char *my_strncpy (char *dest, char const *src, int n);

int my_error(int ac, int x, char *s, int positif);

int my_perror(char *c);

int my_ls_error(int ac, char *av);