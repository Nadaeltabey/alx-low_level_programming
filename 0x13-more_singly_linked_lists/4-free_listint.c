#include "lists.h"
/**
 * free_listint - writes th
 * @head: Th
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_listint(listint_t *head)
{
listint_t *temp;
if (!head)
	return;
temp = head;
while (temp->next != NULL)
	free(temp->n);
	free(temp);
	temp = temp->next;
}
