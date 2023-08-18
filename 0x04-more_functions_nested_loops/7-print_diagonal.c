#include"main.h"

/**
 * print_line - function to give
 * a straight line
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
			for (i=1; i<=n; i++)
			{
				if  (i >= 2)
				{
				for (j=1; j<i; j++)
				{
				_putchar(' ');
				}
				}	
			_putchar('\\');
			if (i < n)
			_putchar('\n');
			}
	 _putchar('\n');
	}
}
