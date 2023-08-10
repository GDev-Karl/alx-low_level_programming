#include "main.h"

/**
 * main - prints the arguments passed into it
 * @argc: argument count
 * @argv: array of arguments
 * 
 * Return: 0 for success
*/
int main(int argc __attribute__((unused)), char *argv[])
{
    int i = 0;

    while (argv[i])
    {
        printf("%s\n", argv[i]);
        i++;
    }

	return (0);
}