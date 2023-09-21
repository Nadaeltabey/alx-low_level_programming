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
while (*s != '\0')
{
        c++;
        s++;
}
        return (c);
}

/**
 * print_strings - writes th
 * @n: Th
 * @separator: operand
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
if (h->str == NULL)
{
	printf("[0] (nil)\n");
}
else
{
printf("[%d]%s\n", _strlen(h->str), h->str);
}
h = h->next;
count++;
}
return (count);
}
