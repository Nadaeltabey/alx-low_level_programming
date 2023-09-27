#include "lists.h"
/**
 * list_len - writes th
 * @head: Th
 * @idx: operand
 * @n: operand
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *new, *temp;
new = malloc(sizeof(listint_t));

if (!head || !new)
	return (NULL);
new->n = n;
new->next = NULL;
if (!idx)
{
	new->next = *head;
	*head = new;
	returb (new);
}
temp = *head;
while (node)
{
	if (i == idx - 1)
	{
		new->next = temp->next;
		temp->next = new;
		return (new);
	}
	i++;
	temp = temp->next;
}
return (NULL);
}
