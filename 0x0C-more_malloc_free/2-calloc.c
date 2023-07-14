#include <stdlib.h>
#include "main.h"
/**
* _calloc - allocates memory for an array using malloc
* @nmemb: number of elements
* @size: size of each element
*
* Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, total_size;
char *ptr;

if (nmemb == 0 || size == 0)
return NULL;

total_size = nmemb * size;

ptr = malloc(total_size);
if (ptr == NULL)
return NULL;

    for (i = 0; i < total_size; i++)
        ptr[i] = 0;

    return ptr;
}

