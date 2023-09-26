#include "lists.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
/**
 * print_listint - writes th
 * @h: Th
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t print_listint(const listint_t *h)
{
size_t c = 0;
while (h)
{
	if (h->n)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
c++;
}
return (c);
}
