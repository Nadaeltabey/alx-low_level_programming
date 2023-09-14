#include "function_pointers.h"

/**
 * array_iterator - writes th
 * @array: Th
 * @size: operand
 * @action: operand
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
if (size && action && array)
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
