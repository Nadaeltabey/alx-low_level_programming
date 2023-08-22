#include"main.h"

/**
 * puts2 - function to give
 * a reverse
 * @str: operand
 *Return:  1 (Success) and 0 (failure)
*/
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
	if (i % 2 == 0)
	{
	_putchar(str[i]);
	}
}
_putchar('\n');
}
