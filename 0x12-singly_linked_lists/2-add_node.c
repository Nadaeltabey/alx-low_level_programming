#include "lists.h"

/**
 * *add_node - function to give
 * alength
 * @head: operand
 * @str: operand
 *Return:  1 (Success) and 0 (failure)
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int c = 0;

while (str[c])
{
c++;
}
new = malloc(sizeof(list_t));
if (new == NULL)
	return (NULL);
new->str = strdup(str);
new->len = c;
new->next = *head;
*head = new;
return (*head);
}
