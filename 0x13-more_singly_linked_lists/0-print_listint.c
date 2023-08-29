#include <stdio.h>
#include "lists.h"

/**
* struct listint_s - singly linked list
* @n: integer
* @next: points to the next node
*
* Description: singly linked list node structure
*
*/
size_t print_listint(const listint_t *h)
{
size_t num_node = 0;

while (h)
{
printf("%d\n", h->n);
num_node++;
h = h->next;
}
return (num_node);
}
