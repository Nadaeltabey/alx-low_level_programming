#include"main.h"

/**
 * more_numbers - function to give the
 * numbers until fourteen ten times
 *
 *Return:  1 (Success) and 0 (failure)
*/
void more_numbers(void)
{
	int i = 0, n, m;

	while (i <= 9)
	{
		n = 0;
		while (n <= 14)
		{
		if (n > 9)
		{
		_putchar(1 + '0');
		m = n % 10;
		}
		_putchar(m + '0');
		n++;
		}
	_putchar('\n');
	i++;
	}
}
