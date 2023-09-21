#include "lists.h"
/**
 * list-len - writes th
 * @h: Th
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
