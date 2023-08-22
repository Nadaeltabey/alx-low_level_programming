#include"main.h"

/**
 * print_rev - function to give
 * a reverse
 * @s: operand
 *Return:  1 (Success) and 0 (failure)
*/
void print_rev(char *s)
{
int i;

for (i = *s-1; i > '\0'; i--)
{
	_putchar(*s[i]);
}
_putchar('\n');
}
