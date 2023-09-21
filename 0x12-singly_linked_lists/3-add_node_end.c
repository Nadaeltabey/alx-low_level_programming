#include "lists.h"

/**
 * _strlen - function to give
 * alength
 * @head: operand
 * @str: operand
 *Return:  1 (Success) and 0 (failure)
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *ptr;
ptr = *head;
unsigned int c = 0;
while (str[c])
{
c++;
}
new = malloc(sizeof(list_t));
if (!new || !head)
{
return (NULL);
}
new->str = strdup(str);
if (!new->str)
{
free(new);
return (NULL);
}
new->len = c;
new->next = (NULL);
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = new;
}
