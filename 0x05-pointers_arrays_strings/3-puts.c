#include"main.h"

/**
 * _puts - function to give
 * a string
 * @str: operand
 *Return:  1 (Success) and 0 (failure)
*/
void _puts(char *str)
{
while (*str != 0)
{ _putchar(*str);
str++;
}
_putchar('\n');
}
