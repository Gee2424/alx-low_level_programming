#include "main.h"

/**
* print_binary_recursive - Recursively prints the binary representation of a number.
* @n: The number to print in binary.
*/
void print_binary_recursive(unsigned long int n)
{
if (n > 1)
print_binary_recursive(n >> 1);

_putchar((n & 1) + '0');
}

/**
* print_binary - Prints the binary representation of a number.
* @n: The number to print in binary.
*/
void print_binary(unsigned long int n)
{
if (n == 0)
_putchar('0');
else
print_binary_recursive(n);
}

