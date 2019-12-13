/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** pb_fonction.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

void pb(int *l_b, int *l_a, int *taille_lb, int *taille_la)
{
    int first = l_a[0];
    int i = 0;
    int j = 0;

    *taille_lb += 1;
    i = *taille_lb - 1;
    while (i > 0) {
        l_b[i] = l_b[i - 1];
        i--;
    }
    l_b[0] = first;
    *taille_la -= 1;
    while (j < *taille_la) {
        l_a[j] = l_a[j + 1];
        j++;
    }
    write(1, "pb", 3);
}