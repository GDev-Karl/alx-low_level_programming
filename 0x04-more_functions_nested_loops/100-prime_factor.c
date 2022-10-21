#include <stdio.h>

/**
 * main -where our progam starts
 *
 * Return: 0 success
 */

int main(void)
{
	long int n;
	n = 612852475143;
	long int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			n = n / i;
	}
	printf("%ld\n",i);

	return (0);
}
