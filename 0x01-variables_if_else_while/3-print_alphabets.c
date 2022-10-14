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
	char uppercase;

	for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
		putchar(lowcase);
	for(uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		putchar(uppercase);
	putchar('\n');

	return (0);
}
