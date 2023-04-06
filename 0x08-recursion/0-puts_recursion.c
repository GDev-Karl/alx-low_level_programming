#include "main.h"

/**
 *_puts_recursion - prints a string
 *@a: pointer block of memory to fill
 *Return: void
 */

void _puts_recirsion(char *a)
{
    if (*a == '\0')
    {
        _putchar('\n');
    }
    else
    {
        _putchar(*a);
        _putcahr(a+1);
    }
}