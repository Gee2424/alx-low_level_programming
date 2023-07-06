#include "main.h"

/**
 * _strlen_recursion - returns the size in length of a string
 * @s: string whose length is calculated
 *
 * Return: string length 
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

