#include <stdio.h>
#include "lists.h"

/**
* print_list - print all elements of a linked list
* @h: pointer to the list_t list to print
* Return: number of nodes printed
*/
size_t print_list(const list_t *h)
{
size_t counter = 0;

while (h)
{
if (!h->str == null)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
counter++;
h = h->next;
}
return (counter);
}
