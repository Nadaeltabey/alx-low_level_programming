#include "main.h"

/**
 * puts_half - function to give
 * a reverse
 * @str: operand
 *Return:  1 (Success) and 0 (failure)
*/
void puts_half(char *str)
{
	int i;

	/*
	 * c = 0;
	 * */
	for (i = 0; str[i] != '\0'; i++)
		i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	/*
	n = c / 2;
	if ((c % 2) == 1)
		n = ((c - 1) / 2);
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	*/
_putchar('\n');
}
