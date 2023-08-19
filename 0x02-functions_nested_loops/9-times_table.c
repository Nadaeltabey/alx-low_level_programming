#include"main.h"

/**
 * times_table - function to give the
 * time table
 *
 *Return:  1 (Success) and 0 (failure)
*/
void times_table(void)
{
int m, n, y, f, l;
for (m = 0; m <= 9; m++)
{
	for (n = 0; n <= 9; n++)
	{
		y = n * m;
		if (n == 0)
		{
			_putchar('0');
		}
		else if (y <= 9)
		{
		_putchar(' ');
		_putchar(' ');
		_putchar(',');
		_putchar(y + '0');
		}
		else
		{
		_putchar(' ');
		_putchar(',');
		f = (y / 10);
		l = (y % 10);
		_putchar(f + '0');
		_putchar(l + '0');
		}
	}
_putchar('\n');
}
_putchar('\n');
}
