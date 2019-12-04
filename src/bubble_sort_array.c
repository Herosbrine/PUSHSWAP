/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** bubble_sort_l_a.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void bubble_sort_l_a(int *l_a, int size)
{
    int i = 0;
    int x = 0;

    while (i != size) {
        if (l_a[i] > l_a[i+1] && i+1 < size) {
            x = x + 1;
            swap_elem(&l_a[i], &l_a[i+1]);
            i = 0;
        }
        else
            i++;
    }
    for (int a = 0; x > a; a++) {
        my_putchar('s');
        my_putchar('a');
        my_putchar(' ');
    }
}
