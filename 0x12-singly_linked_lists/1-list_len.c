#include <stdlib.h>  
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */

/* Function to get the length of the linked list. */
size_t list_len(const list_t *h)
{
	size_t n = 0;  /* Initialize counter for list length */

    /* Loop through each node of the list */
	while (h)
	{
		n++;   /* Increment the counter for each node encountered */

        /* Move to the next node */
		h = h->next;  
	}

    /* Return the total count of nodes in the list */
	return (n);
}

