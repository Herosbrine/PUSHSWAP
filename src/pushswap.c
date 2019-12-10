/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** pushswap.c
*/
#include <stdlib.h>
#include <stddef.h>
#include "my.h"
#include <stdio.h>

void push_swap(int*l_a, int size)
{
    int i = 0;
    int j = 0;
    int smaller_n = 0;
    int x = 0;
    int x2 = 0;
    int *l_test = 0;
    int *l_b;

    l_test = l_a;
    while (x != size || x2 != size) {
        if (l_a[x] < l_test[x2])
            x2++;
        if (l_a[x] > l_test[x2])
            x++;
        if (l_a[x] == l_test[x2])
            smaller_n = l_a[x];
    }

    while(l_a[i] != smaller_n) {
    if (l_a[i] < l_a[i+1] && i+1 < size) {
        swap_elem(&l_a[i], &l_a[i+1]);
        i = 0;
        j++;
    }
    else {
        l_b[j] = l_a[i];
        i++;
    }
    }
    for (int a = 0; size > a; a++) {
        printf("l_b : %d", l_b[a]);
        printf("l_a : %d", l_a[a]);
    }
}
int main(int ac, char **argv)
{
    int i = 1;
    int a = 0;
    int *l_a = NULL;
    l_a = malloc(sizeof(int) * ac);

    while (i < ac ) {
        l_a[a] = my_getnbr(argv[i]);
        i++;
        a++;
    }
    push_swap(l_a, ac - 1);
}