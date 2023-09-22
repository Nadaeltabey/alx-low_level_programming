#include "lists.h"

/**
 * free_list - function to give
 * alength
 * @head: operand
 *Return:  1 (Success) and 0 (failure)
*/
void free_list(list_t *head)
{
list_t *ptr;
if (!head)
	return;
while (head)
{
ptr = head->next;
free(head->str);
free(head);
head = ptr;
}
}
