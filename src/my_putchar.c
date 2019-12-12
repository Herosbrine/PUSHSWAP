/*
** EPITECH PROJECT, 2019
** src
** File description:
** my_putchar.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}