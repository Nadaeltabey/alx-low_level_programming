#include "function_pointers.h"

/**
 * int_index - writes th
 * @array: Th
 * @size: operand
 * @cmp: operand
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array && size && cmp)
	while (i++ < size)
	{
		if (cmp(array[i]))
			return (i);
	}
return (-1);
}
