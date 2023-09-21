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
unsigned int i, c = 0;
list_t *new, *ptr;
new = malloc(sizeof(list_t));
if (!new)
{
return (NULL);
}
new->str = strdup(str);
for (i = 0; str[i] != '\0'; i++)
	c++;
new->len = c;
new->next = NULL;
ptr = *head;
if (ptr == NULL)
{
	*head = new;
}
else
{
while (ptr->next)
{
ptr = ptr->next;
}
ptr->next = new;
}
return (*head);
}
