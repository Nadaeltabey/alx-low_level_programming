#include "lists.h"
/**
 * add_nodeint_end - writes th
 * @h: Th
 * @n: operand
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr, *temp;
ptr = malloc(sizeof(listint_t));
if (!ptr)
	return (NULL);
ptr->next = NULL;
ptr->n = n;
temp = *head;
if (*head == NULL)
{
	*head = ptr;
}
else
{
temp = *head
while (temp->next != NULL)
	temp = temp->next;
temp->next = ptr;
}
return ptr;
}
