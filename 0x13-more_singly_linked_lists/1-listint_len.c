#include "lists.h"

/**
 * listint_len - writes th
 * @h: Th
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t listint_len(const listint_t *h)
{
size_t c = 0;
while (h)
{
	h = h->next;
	c++;
}
return (c);
}
