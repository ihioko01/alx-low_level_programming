#include <stdio.h>
#include "lists.h"

/**
* listint_len - returns the number of elements in a linked lists
* @h: A pointer to the head of the list.
*
* Return: The number of elements in the list.
*
*/
size_t listint_len(const listint_t *h)
{
size_t num_node = 0;

while (h)
{
num_node++;
h = h->next;
}
return (num_node);
}
