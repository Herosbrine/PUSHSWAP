/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** bubble_sort.c
*/
#include <criterion/criterion.h>
#include "my.h"

void swap_elem(int *index1, int *index2)
{
    int buffer;

    buffer = *index1;
    *index1 = *index2;
    *index2 = buffer;
}