#include "lists.h"

/**
 * _strlen - function to give
 * alength
 * @s: operand
 *Return:  1 (Success) and 0 (failure)
*/
int _strlen(char *s)
{
int c = 0;
if (!s)
	return (0);
while (*s++)
{
	c++;
}
	return (c);
}

/**
 * print_list - writes th
 * @h: Th
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h)
{
printf("[%d]%s\n", _strlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
count++;
}
return (count);
}
