#include"main.h"

/**
 * print_square - function to give
 * a square
 * @size: operand
 *Return:  1 (Success) and 0 (failure)
*/
void print_square(int size)
{
int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= size; j++)
	{
	_putchar('#');
	}
	if (i < size)
	{
	_putchar('\n');
	}
	}
	_putchar('\n');
	}
}
