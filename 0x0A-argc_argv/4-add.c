#include "main.h"
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
    int i, j, sum;

    if (argc == 0)
    {
        printf("0\n");
    }

    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
                return 1;
            }
        }

        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);

    return (0);
}