#include"main.h"

/**
 * print_triangle - function to give
 * a triangle
 * @size: operand
 *Return:  1 (Success) and 0 (failure)
*/
void print_triangle(int size)
{
int i, j, k;
		if (size <= 0)
		{
		_putchar('\n');
		}
		else
		{
			for (i = 1; i <= size; i++)
			{
				for (j = 1; j <= size - i; j++)
				{
					_putchar(' ');
				}
				for (k = 1; k <= i; k++)
				{
					_putchar('#');
				}
			if (i < size)
			_putchar('\n');
			}
		_putchar('\n');
		}
}
