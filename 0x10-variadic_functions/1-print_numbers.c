#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers
 * @n: number of integers to print
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr_valist;
	unsigned int i;

	va_start(ptr_valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr_valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	va_end(ptr_valist);
	printf("\n");
}
