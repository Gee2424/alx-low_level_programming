#include "main.h"

/**
 * _strspn - obtain length of prefix substring
 * @s: string to evaluate
 * @accept: string with characters to match in s
 *
 * Return: number of bytes in the original segment
 * in variable s with bytes from variable accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int length = 0;
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
                break;
        }

        if (accept[j] == '\0')
            return length;

        length++;
    }

    return length;
}

