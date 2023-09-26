#include "lists.h"
/**
 * list_len - writes th
 * add_nodeint - ghkl
 * @head: Th
 * @n: operand
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr;
ptr = malloc(sizeof(listint_t));
if (ptr == NULL)
	return (NULL);
ptr->n = n;
ptr->next = *head;
*head = ptr;
return (ptr);
}
