#include"main.h"

/**
 * print_diagonal - function to give
 * a diagonal
 * @n: operand
 *Return:  1 (Success) and 0 (failure)
*/
void print_diagonal(int n)
{
int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 1; i <= n; i++)
	{
	if  (i >= 2)
	{
	for (j = 1; j < i; j++)
	{
	_putchar(' ');
	}
	}
	_putchar('\\');
	if (i < n)
	{
	_putchar('\n');
	}
	}
	 _putchar('\n');
	}
}
