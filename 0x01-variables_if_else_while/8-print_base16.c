#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - whee our program starts
 *
 * Return: 0  success
 */

int main(void)
{
	int d;
	char lowcase;

	for (d = 0; d <= 9; d++);
		putchar(d);
	for (lowcase = 'a'; lowcase <= 'f'; lowcase++)
		putchar(lowcase);

	putchar('\n');

	return (0);
}
