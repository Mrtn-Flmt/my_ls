/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** my first ls unix command
*/

#include "./../include/my.h"

int my_ls_error(int ac, char *av)
{
    int i = 0;

    for (; av[i] != '\0'; i++) {
        if (i != 0 && av[i - 1] == '-') {
            if (av[i] != 'l' && av[i] != 'R' &&
                av[i] != 't' && av[i] != 'h') {
                    my_printf("ERROR 404 // add option\n");
                    return (84);
            }
        }
    }
    return (0);
}

// int management_ls(int ac, char **av)
// {
//     for (int i = 0; i < ac; i++) {
//         if (av[1][i] == '-' && av[1][i+1] == 'h') {
//             my_printf("Try this syntax :\n./my_ls -l\n./my_ls -R\n./my_ls -t\n");
//             return (0);
//         } else if (av[1][i] == '-' && av[1][i+1] == 'l') {
//             my_printf("-rw-r--r--@ 1 martinflament  staff    910 15 déc 17:10 Makefile\n");
//             return (0);
//         } else if (av[1][i] == '-' && av[1][i+1] == 'R') {
//             my_printf("./include:\nmy.h\n");
//             return (0);
//         } else if (av[1][i] == '-' && av[1][i+1] == 't') {
//             my_printf("my_ls.c         my_ls           my_ls.o         lib             include         Makefile\n");
//             return (0);
//         }
//     }
//     return (0);
// }