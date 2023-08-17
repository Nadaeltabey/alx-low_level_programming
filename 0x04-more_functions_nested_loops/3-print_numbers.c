#include"main.h"

/**
 * print_numbers  - function to give the
 * numbers
 *
 *
 *Return:  1 (Success) and 0 (failure)
*/
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
	i++;
	}
_putchar('\n');
}
