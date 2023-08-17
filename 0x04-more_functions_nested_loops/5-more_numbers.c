#include"main.h"

/**
 * more_numbers  - function to give the
 * numbers
 *
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
		_putchar(n + '0');
		n++;
		}
	_putchar('\n');
	i++;
	}
}
