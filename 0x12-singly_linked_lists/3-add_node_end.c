#include "lists.h"

/**
 * add_node_end - function to give
 * alength
 * @head: operand
 * @str: operand
 *Return:  1 (Success) and 0 (failure)
*/
list_t *add_node_end(list_t **head, const char *str)
{
int c = 0;
list_t *new, *ptr;
ptr = *head;
while (str[c])
{
c++;
}
new = malloc(sizeof(list_t));
if (!new)
{
return (NULL);
}
new->str = strdup(str);
new->len = c;
new->next = NULL;
if (*head == NULL)
{
	*head = new;
	return (new);
}
while (ptr->next)
{
ptr = ptr->next;
}
ptr->next = new;
return (new);
}
