#include "main.h"
#include <stdio.h>

/**
* *_strpbrk - searches a string for any of a set of bytes
* @s: string to be searched
* @accept: string that contains the bytes to be searched
*
* Return: pointer to the byte in s that matches one
* the bytes in accept
* NULL is retuned if no such byte is obtained
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; *s != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
{
return (s);
}
}
s++;
}

return (NULL);
}
