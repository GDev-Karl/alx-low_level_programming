#include "main.h"

/**
 * main - prints the minimum number of coins to make change for an amount of money.
 * @argc: number of argument
 * @argv: array of arguments
 * 
 * Return: 0 for success
*/
int main(int argc, char *argv[])
{
    int cents, i;
    int coin_values[] = {25, 10, 5, 2, 1};
    int num_coins = 0;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    cents = atoi(argv[1]);

    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }

    while (cents > 0)
    {
        for (i = 0; i < 5; i++)
        {
            if (cents >= coin_values[i])
            {
                num_coins++;
                cents -= coin_values[i];
                break;
            }
        }
    }

    printf("%d\n", num_coins);

    return (0);
}