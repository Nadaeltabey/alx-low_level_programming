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
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
