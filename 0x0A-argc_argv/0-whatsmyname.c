#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * 
 * Return: 0 for success
*/

int main(int argc __attribute__((unused)), char *argv[])
{
    printf("%s \n", *argv);
    return 0;
}