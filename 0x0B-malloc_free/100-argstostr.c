#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program
* @ac: argument count
* @av: argument vector
*
* Return: pointer to new space in memory or null
*/
char *argstostr(int ac, char **av)
{
char *strDup;
int i, j, k, size;

if (ac == 0 || av == NULL)
return (NULL);

/* count the number of chars in each string */
for (i = 0, size = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, size++)
;
size++;
}
size++;

/**
*malloc - allocate memory for total number of chars and
* new line for each argument
*/

strDup = malloc(sizeof(char) * size);
if (strDup == NULL)
return (NULL);

/* append each arg to new string */
for (i = 0, k = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, k++)
{
strDup[k] = av[i][j];
}
strDup[k] = '\n';
k++;
}
strDup[k] = '\0';

return (strDup);
}
