#include "main.h"
#include <stddef.h> /*Include the header for NULL*/

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: Pointer to a string of 0 and 1 chars.
*
* Return: The converted number, or 0 if there are non-binary chars or b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
unsigned int i; /*Declare the loop variable outside the loop*/

if (b == NULL) /* Check for NULL input string */
return 0;

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1') /* Check for non-binary characters */
return 0;

result = result * 2 + (b[i] - '0'); /* Convert binary to decimal */
}

return result;
}

