#include <stdlib.h>
#include "lists.h"

/**
* list_len - Return the number of elements in a linked list
* @h: Pointer to the list_t list
*
* Return: The number of elements in h
*/
size_t list_len(const list_t *h)
{
size_t counter = 0;

while (h)
{
counter++;
h = h->next;
}
return (counter);
}
