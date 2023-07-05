#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: the pointed memory area
 * @src: memory content to copy from
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

