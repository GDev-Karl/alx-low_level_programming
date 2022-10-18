#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - where our program starts
 *
 * Return: 0 success
 */

int main(void)
{
	char *list = "_putchar";

	for (int i = 0; i <= strlen(list); i++)
		putchar(list[i]);

	putchar('\n');

	return (0);
}

