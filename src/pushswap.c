/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** pushswap1.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

void pushswap(int taille_la, char **argv)
{
    int *l_a = malloc(sizeof(int) * taille_la - 1);
    int *l_b = malloc(sizeof(int) * taille_la - 1);
    int i = 1, a = 0, taille_lb = 0;
    int sauvegarde = 0, bigger_lb = 0, count = 0;

    while (i < taille_la + 1) {
        l_a[a] = my_getnbr(argv[i]);
        i++;
        a++;
    }
    i = 0;
    while (i < taille_la) {
        if (l_a[i] < l_a[i+1]) {
            i++;
            if ((i + 1) == taille_la) {
                my_putchar(' ');
                exit (0);
            }
        }
        else
            break;
    }
    sauvegarde = taille_la;
    bigger_lb = tall_lb_number(l_b, &taille_lb);
    i = 1;
    while (i != sauvegarde + 1) {
        pb(l_b, l_a, &taille_lb, &taille_la);
        if (sauvegarde != taille_la && taille_la != 0)
            write(1, " ", 1);
        i++;
    }
    while (1) {
        bigger_lb = tall_lb_number(l_b, &taille_lb);
        if (l_b[0] == bigger_lb){
            pa(l_b, l_a, &taille_la, &taille_lb);
            count++;
            if (count == sauvegarde)
                break;
        }
        else
            rb(l_b, taille_lb);
    }
}