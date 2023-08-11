#include "main.h"
#include <string.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

    unsigned int i, j, len_s1 = strlen(s1), len_s2 = strlen(s2);
    char *s2_copy, *s;

    s2_copy = malloc(n);

    for (i = 0; i < n && s2[i] != '\0'; i++)
        s2_copy[i] = s2[i];

    s = malloc(sizeof(char) * (len_s1 + len_s2));

    for (i = 0; s1[i] != '\0'; i++)
        s[i] = s1[i];

    for (j = 0 ; s2_copy[j] != '\0'; j++)
    {
        s[i] = s2[j];
        i++;
    }
    s[i] = '\0';

    free(s2_copy);

    return (s);

}

/*
#include "main.h"
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

    unsigned int i, j, len_s1 = strlen(s1), len_s2 = strlen(s2);
    char *s2_copy;
    char *s;

    for (i = 0; i < n && s2[i] != '\0'; i++)
        s2_copy[i] = s2[i];

    s = malloc(sizeof(s1) + sizeof(s2_copy));

    for (i = 0; s1[i] != '\0'; i++)
        s[i] = s1[i];

    for (j = 0 ; s2_copy[j] != '\0'; j++)
    {
        s[i] = s2[j];
        i++;
    }
    s[i] = '\0';

    return (s);

}
*/