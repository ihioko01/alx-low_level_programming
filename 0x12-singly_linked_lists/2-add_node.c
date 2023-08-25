#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - Add a new node at the beginning of a linked list
* @head: A pointer to the list_t list
* @str: The new string is stored in the new node
* Return: The address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str);
{
list_t *new_node;
int len = 0;
while (str[len])
len++
list_t *new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);
new_node->str = strdup(str);
new_node->len = len;
new_node->next = (*head);
(*head) = new_node;

return (*head);
}
