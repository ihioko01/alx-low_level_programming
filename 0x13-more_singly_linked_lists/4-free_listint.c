#include "lists.h"
/**
* free_listint - Free a linked list
* @head: listint_t list to be freed
*
*/
void free_listint(listint_t *head)
{
listint_t *free_node;

while (head)
{
free_node = head->next;
free(head);
head = free_node;
}

}
