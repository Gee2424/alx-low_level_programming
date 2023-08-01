#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t linked list.
* @head: Pointer to a pointer to the head of the list.
*
* Return: The data (n) of the deleted head node, or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
int data = 0;
listint_t *temp;

if (head != NULL && *head != NULL)
{
temp = *head;
data = temp->n;
*head = (*head)->next;
free(temp);
}

return data;
}

#include <stddef.h>
#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list.
* @head: Pointer to the head of the list.
* @index: Index of the node to be returned, starting from 0.
*
* Return: Pointer to the nth node, or NULL if the node does not exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *current = head;

while (current != NULL)
{
if (count == index)
return current;

current = current->next;
count++;
}

return NULL;
}

