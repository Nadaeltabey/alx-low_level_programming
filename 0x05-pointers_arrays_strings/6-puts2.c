#include"main.h"

/**
 * puts2 - function to give
 * a reverse
 * @str: operand
 *Return:  1 (Success) and 0 (failure)
*/
void puts2(char *str)
{
while (*str != '\0')
{ _putchar(*str);
str += 2;
}
_putchar('\n');
}
