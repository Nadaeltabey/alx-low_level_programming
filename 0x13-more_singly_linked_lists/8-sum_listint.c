#include "lists.h"
/**
 * sum_listint - writes th
 * @head: Th
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sum_listint(listint_t *head)
{
listint_t *temp = head;
int sum = 0;

if (!temp)
	return (0);
while (temp != NULL)
{
	sum = sum + temp->n;
	temp = temp->next;
}
return (sum);
}
