/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** my first ls unix command
*/

#include "./../include/my.h"
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>

void my_lsh(int ac, char **av)
{
    for (int i = 0; i < ac; i++) {
        if (av[1][i] == '-' && av[1][i+1] == 'h') {
            my_printf("Try this syntax :\n./my_ls\n./my_ls -l\n./my_ls -R\n./my_ls -t\n");
        }
    }
}

void my_ls(int ac)
{
    DIR *dir = opendir(".");
    struct dirent* file;

    if (dir) {
        if (ac == 1) {
            while ((file = readdir(dir)) != NULL) {
                if (file->d_name[0] != '.')
                    my_printf("%s  ", file->d_name);
            }
        my_printf("\n");
        closedir(dir);
        }
    }
}

int main(int ac, char **av)
{
    if (ac == 1) {
        my_ls(ac);
    } else if (ac == 2) {
        my_lsh(ac, av);
        my_ls_error(ac, av);
    } else {
        my_printf("try: ./my_ls -h\n");
        return (84);
    }
}