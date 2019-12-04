/*
** EPITECH PROJECT, 2019
** src
** File description:
** main.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int main(int ac, char **argv)
{
    int i = 1;
    int a = 0;
    int *l_a = NULL;
    l_a = malloc(sizeof(int) * ac);

    while (i < ac ) {
        l_a[a] = my_getnbr(argv[i]);
        i++;
        a++;
    }
    bubble_sort_l_a(l_a, ac - 1);
}