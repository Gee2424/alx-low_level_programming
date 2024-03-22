#include "lists.h"

/**
* get_dnodeint_at_index - Gets the node at a specific index in a linked list
* @head: Pointer to the head of the linked list
* @index: Index of the node to get, starting from 0
*
* Return: Pointer to the node at the specified index, or NULL if it doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int i = 0;

while (current != NULL)
{
if (i == index)
return (current);

current = current->next;
i++;
}

return (NULL);
}
