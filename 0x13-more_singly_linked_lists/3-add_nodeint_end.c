#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of a listint_t list.
* @head: A pointer to a pointer to the head of the list.
* @n: The value to be stored in the new node.
*
* Return: The address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nodeint_end = malloc(sizeof(listint_t));
if (nodeint_end == NULL)
return (NULL);
nodeint_end->n = n;
nodeint_end->next = NULL;

if (*head == NULL)
{
*head = nodeint_end;
}
else
{
listint_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = nodeint_end;
}

return (nodeint_end);
}
