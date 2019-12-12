/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** tall_lb_number.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int tall_lb_number(int *l_b, int *taille_lb)
{
    int i = 0;
    int bigger = 0;

    while (i < *taille_lb) {
        if (l_b[i] > bigger)
            bigger = l_b[i];
        i++;
    }
    return (bigger);
}