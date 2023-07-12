#include "main.h"
#include <stdlib.h>

/**
* strtow - splits a string into words
* @str: the string to split
*
* Return: pointer to an array of words
*/
char **strtow(char *str)
{
char **words;
int i, j, k, h, w_count, c_count;

if (str == NULL || str[0] == '\0')
return (NULL);

for (w_count = i = 0; str[i]; i++)
if ((str[i] != ' ' && str[i + 1] == ' ')
|| (str[i] != ' ' && str[i + 1] == '\0'))
w_count++;

words = malloc((w_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

for (i = j = 0; i < w_count; i++)
{
while (str[j] == ' ')
j++
;
for (c_count = 0; str[j + c_count] != ' ' && str[j + c_count]; c_count++)
;
words[i] = malloc((c_count + 1) * sizeof(char));
if (words[i] == NULL)
{
for (k = 0; k < i; k++)
free(words[k]);
free(words);
return (NULL);
}
for (h = 0; h < c_count; h++)
words[i][h] = str[j + h];
words[i][h] = '\0';
j += c_count;
}
words[i] = NULL;
return (words);
}
