#include "main.h"

/**
 * _print_rev_recursion - to prints a string in reverse order
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

