/*
** EPITECH PROJECT, 2020
** my_pushswap
** File description:
** my_atoi
*/

int my_atoi(char *s)
{
    int n = 0;
    int i = 0;
    for (; *s != '\0'; s++) {
        if (*s >= '0' && *s <= '9')
            n = n * 10;
            n = n + *s - 48;
    }
    return (n);
}