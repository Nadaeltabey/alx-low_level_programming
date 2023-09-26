#include "lists.h"
/**
 * pop_listint - writes th
 * @head: Th
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int s;
if (!(*head) || !head)
	return (0);
s = (*head)->n;
temp = (*head);
(*head) = (*head)->next;
free(temp);
return (s);
}

