#include "main.h"

/**
* clear_bit - Sets the value of a bit to 0 at a given index.
* @n: Pointer to the number to modify.
* @index: The index of the bit to clear.
* 
* Return: 1 if successful, or -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8) /*Check if index is out of bounds*/
return (-1);

*n = *n & (~(1 << index)); /*Clear the bit at the specified index*/
return (1);
}

