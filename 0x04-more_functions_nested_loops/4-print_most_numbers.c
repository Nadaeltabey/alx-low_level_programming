#include"main.h"

/**
 * print_most_numbers  - function to give the
 * numbers except two and four
 *
 *
 *Return:  1 (Success) and 0 (failure)
*/
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
	if (i != 2 && i != 4)
	{
	_putchar(i + '0');
	}
	i++;
	}
_putchar('\n');
}
