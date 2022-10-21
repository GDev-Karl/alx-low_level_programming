#include <stdio.h>

/**
 * main - where our program starts
 *
 * Return: 0 success
 */

int main(void)
{
	int i;
	char *f = "Fizz";
	char *b = "Buzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s%s ", f, b);
		else if (i % 3 == 0)
			printf("%s ", f);
		else if (i % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", i);
	}
	
	printf("\n");

	return (0);
}
