#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - where our program starts
 *
 * Return: 0 success
 */

int main(void)
{
	char lowcase;

	for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
		putchar(lowcase);
	putchar('\n');

	return (0);
}
