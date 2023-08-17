#include"main.h"

/**
 * more_numbers - function to give the
 * numbers until fourteen ten times
 *
 *Return:  1 (Success) and 0 (failure)
*/
void more_numbers(void)
{
	int i = 0, n;

	while (i <= 9)
	{
		n = 0;
		while (n <= 14)
		{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		n++;
		}
	_putchar('\n');
	i++;
	}
}
