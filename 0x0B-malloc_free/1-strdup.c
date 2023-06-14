#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
    char *dup;
    unsigned int i, len = 0;

    if (str == NULL) /* validate str input */
        return (NULL);

    while (str[len]) /* get length of str */
        len++;

    dup = malloc(sizeof(char) * (len + 1)); /* allocate memory for duplicate */

    if (dup == NULL) /* validate memory allocation */
        return (NULL);

    for (i = 0; i < len; i++) /* copy the string */
        dup[i] = str[i];

    dup[len] = '\0'; /* null terminate the string */

    return (dup);
}
