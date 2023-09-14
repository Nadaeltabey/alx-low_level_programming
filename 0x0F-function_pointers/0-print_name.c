#include "function_pointers.h"

/**
 * main - writes th
 * @argc: Th
 * @argv: operand
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
