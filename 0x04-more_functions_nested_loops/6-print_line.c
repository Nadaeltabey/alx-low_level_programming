#include"main.h"

/**
 * print_line - function to give
 * a straight line
 * @n: operand
 *Return:  1 (Success) and 0 (failure)
*/
void print_line(int n)
{
	if (n <= 0)
	_putchar('\n');
	else
	{
		while (n > 0)
		{
		_putchar('_');
		--n;
	}
	_putchar('\n');
	}
}
