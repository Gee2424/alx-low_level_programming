#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given position.
* @head: Pointer to the head of the list.
* @idx: Index of the list where the new node should be added. Index starts at 0.
* @n: Value to store in the new node.
*
* Return: The address of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *new_node, *current = *head;

if (head == NULL)
return NULL;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return NULL;

new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return new_node;
}

while (current != NULL && i < idx - 1)
{
current = current->next;
i++;
}

if (current == NULL)
{
free(new_node);
return NULL;
}

new_node->next = current->next;
current->next = new_node;

return new_node;
}

