#include"main.h"

/**
 * puts2 - function to give
 * a reverse
 * @str: operand
 *Return:  1 (Success) and 0 (failure)
*/
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{ _putchar(str[i]);
str = i + 2;
}
_putchar('\n');
}
