/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** ra_fonction.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

void ra(int *l_a, int taille_la)
{
    int end = l_a[0];
    int i = 0;

    while(i < taille_la - 1) {
        l_a[i] = l_a[i + 1];
        i++;
    }
    l_a[taille_la - 1] = end;
    write(1, " ra", 3);
}