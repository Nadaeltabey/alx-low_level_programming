#include "function_pointers.h"

/**
 * print_name - writes th
 * @name: Th
 * @f: operand
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
	f(name);
}
