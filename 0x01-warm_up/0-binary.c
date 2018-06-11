#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Binary Searh Algorithm to find a value in a sorted array
 * @array: Pointer to beginning of array being search
 * @size: Length of the array being searched
 * @value: Value being searched for within the array
 * Return: index of value being searched upon success, or -1 on failure
 */

int binary_search(int *array, size_t size, int value)
{
    int end = size - 1;
    int beg = 0;
    int i, j;

    if (array != NULL)
    {
        for (i = end / 2 + 1; i >= beg && i <= end;)
        {
            printf("Searching in array: ");
            for (j = beg; j <= end; j++)
            {
                printf("%d", array[j]);
                if (j < end)
                {
                    printf(", ");
                }
            }
            printf("\n");
            if (array[i] == value)
            {
                return (i);
            }
            else if (array[i] > value)
            {
                end = i - 1;
                i = (i / 2) + beg;
            }
            else
            {
                beg = i + 1;
                i = (end + i) / 2 + 1;
            }
        }
    }
    return (-1);
}
