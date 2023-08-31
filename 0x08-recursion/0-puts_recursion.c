#include "main.h"

/**
 * _puts_recursion - function to give
 * a string
 * @s: operand
 *Return:  1 (Success) and 0 (failure)
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
	return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
