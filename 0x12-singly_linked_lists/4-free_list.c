#include "lists.h"

/**
 * add_node_end - function to give
 * alength
 * @head: operand
 * @str: operand
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
