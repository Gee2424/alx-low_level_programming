#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - frees a dlistint_t list
* @head: pointer to the head of the dlistint_t list
*
* Description: Frees all the nodes of a doubly linked list.
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;
while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
