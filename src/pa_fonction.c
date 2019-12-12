/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** pa_fonction.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

void pa(int *l_b, int *l_a, int *taille_la, int *taille_lb)
{
    int first = l_b[0];
    int i = 0;
    int j = 0;

    *taille_la += 1;
    i = *taille_la - 1;
    while (i > 0) {
        l_a[i] = l_a[i - 1];
        i--;
    }
    l_a[0] = first;
    *taille_lb -= 1;
    while (j < *taille_lb) {
        l_b[j] = l_b[j + 1];
        j++;
    }
    write(1, "pa ", 3);
}