#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array of element
 * @size: number of elements in the array
 * @cmp: pointer to function to be used to compare values
 * 
 * Return: the index of the first element for which the cmp is not 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array  && cmp)
        for (i = 0; i < size ; i++)
            if (cmp(array[i]) != 0)
                return (i);
    
    return (-1);
}
