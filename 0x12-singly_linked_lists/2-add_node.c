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
unsigned int i, c = 0;

new = malloc(sizeof(list_t));
if (new == NULL)
	return (NULL);
new->str = strdup(str);
for (i = 0; dtr[i] != '\0'; i++)
	c++;
new->len = c;
new->next = *head;
*head = new;
return (*head);
}
