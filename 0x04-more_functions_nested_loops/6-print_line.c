#include"main.h"

/**
 * print_line - function to give
 * a straight line
 * @n: operand
 *Return:  1 (Success) and 0 (failure)
*/
void print_line(int n)
{
	int i;
	i = 1;
	while (i <= n)
	{
		_putchar('_');
		_putchar('\n');
		n++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
_putchar('\n');
}
