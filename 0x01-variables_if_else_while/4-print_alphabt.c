#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - where our program starts
 *
 * Retyrn: 0 success
 */

int main(void)
{
	char lowcae;

	for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
	{
		if (lowcase != 'e' && lowcase != 'q')
			putchar(lowcase);
	}
	putchar('\n');

	return(0);
}
