/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** main.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int main(int ac, char **argv)
{
    if (ac < 2)
        return (84);
    pushswap((ac - 1), argv);
}