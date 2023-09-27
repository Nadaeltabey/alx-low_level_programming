#include "lists.h"
/**
 * delete_nodeint_at_index - writes th
 * @head: Th
 * @index: operand
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *last, *temp;
last = malloc(sizeof(listint_t));

if (!head || !last)
	return (-1);
if (!index)
{
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (1);
}
temp = *head;
while (temp)
{
	if (i == index)
	{
		last->next = temp->next;
		free(temp);
		return (1);
	}
	i++;
	last = temp;
	temp = temp->next;
}
return (1);
}
