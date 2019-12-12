/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** rb_fonction.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

void rb(int *l_b, int taille_lb)
{
    int end = l_b[0];
    int i = 0;

    while(i < taille_lb - 1) {
        l_b[i] = l_b[i + 1];
        i++;
    }
    l_b[taille_lb - 1] = end;
    write(1, " rb", 3);
}