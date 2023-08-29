#include "list.h"
/**
* free_listint - Free a linked list
* @head: listint_t list to be freed
*
*/
void free_listint(listint_t *head);
{
litint_t *free;

while (head)
{
free = head->next;
free(head);
head = free;
}

}
