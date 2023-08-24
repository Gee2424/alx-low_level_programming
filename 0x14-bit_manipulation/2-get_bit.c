#include "main.h"

/**
* get_bit - Gets the value of a bit at a given index.
* @n: The number containing the bit.
* @index: The index of the bit to get.
* 
* Return: The value of the bit at the specified index, or -1 if an error occurred.
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8) /*Check if index is out of bounds*/
return (-1);

return ((n >> index) & 1); /*Shift and mask to get the bit value*/
}

