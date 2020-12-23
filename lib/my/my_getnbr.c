/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** my_getnbr function
*/

int my_strlen(char const *str);

int my_getnbr(char const *str)
{
    int nb = 0;
    int length = my_strlen(str);
    int nbr = 0;
    int pos1 = 0;
    int pos2 = 0;

    for (int i = 0; i <= length; i += 1) {
        if (str[i] >= '0' && str[i] <= '9')
            nbr += 1;
        if (nbr == 1)
            pos1 = i;
    }
    pos2 = pos1;
    nb = my_getnbr(str);
    if (nb < -2147483647 || nb > 214783647)
        return (0);
    return (0);
}