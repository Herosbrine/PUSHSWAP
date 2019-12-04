/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** unit_tests.c
*/

#include <criterion/criterion.h>

void swap_elem(int *array, int *index1, int *index2);
void bubble_sort_array(int *array, int size);
Test(bubble_sort_array, index1_greater_than_index2)
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    int index1 = 2;
    int index2 = 4;
    int size = 6;

    bubble_sort_array(array, size);
    cr_assert_eq(array[index1], 5);
    cr_assert_eq(array[index2], 3);
}