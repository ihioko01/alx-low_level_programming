#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of a linked list.
* @head: Pointer to a pointer to the first node in the list.
* @n: Data to insert in the new node.
*
* Return: Pointer to the new node, or NULL if it fails.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node_int = malloc(sizeof(listint_t));
if (node_int == NULL)
return (NULL);

node_int->n = n;
node_int->next = *head;
*head = node_int;

return (node_int);
}
