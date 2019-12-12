/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** tall_la_number.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int tall_la_number(int *l_a, int *taille_la)
{
    int i = 0;
    int bigger = 0;

    while (i < *taille_la) {
        if (l_a[i] > bigger)
            bigger = l_a[i];
        i++;
    }
    return (bigger);
}