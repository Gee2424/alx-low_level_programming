#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
* @head: pointer to the head of the dlistint_t list
* @index: index of the node, starting from 0
*
* Return: the nth node of a dlistint_t linked list, or NULL if the node does
* not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;

while (head != NULL)
{
if (count == index)
return head;
head = head->next;
count++;
}

return NULL;
}
