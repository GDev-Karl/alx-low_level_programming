#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: is the parameter
 *
 * Return: 0 success
 */

int print_last_digit(int n)
{
	int digit;
	digit = n % 10;

	if  (digit < 0)
		digit = - digit;

	_putchar('0' + digit);

	return (digit);
}
