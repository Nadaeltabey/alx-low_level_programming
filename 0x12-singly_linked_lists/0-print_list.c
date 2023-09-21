#include "lists.h"

/**
 * print_list - singly linked list
 * @h: string - (malloc'ed string)
 *
 * Description: singly linked list node structure
 * * Return: On success 1
 */
size_t print_list(const list_t *h)
{
size_t count;
count = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[%d]%s\n", 0, "(nil)");
}
else
{
printf("[%d]%s\n", h->len, h->str);
}
h = h->next;
count++;
}
return (count);
}
