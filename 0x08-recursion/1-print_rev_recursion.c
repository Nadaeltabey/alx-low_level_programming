#include "main.h"

/**
 * _print_rev_recursion - function to give
 * a cat
 * @s: operand
 *Return:  1 (Success) and 0 (failure)
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(s);
--s;
_putchar(*s);
}
