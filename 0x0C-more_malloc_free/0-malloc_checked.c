#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: the size of memory to allocate
 * 
 * Return: 98 if the allocation fail or address of memory if there is no problem
*/
void *malloc_checked(unsigned int b)
{
    void* ptr;

    ptr = malloc(b);

    if (ptr == NULL)
        return(98);
    else
        return (ptr);
}