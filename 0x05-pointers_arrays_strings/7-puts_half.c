#include"main.h"

/**
 * puts_half - function to give
 * a reverse
 * @str: operand
 *Return:  1 (Success) and 0 (failure)
*/
void puts_half(char *str)
{
int i, n;
int c = 0;

while (*str != '\0')
{
c++;
str++;
}
str--;
if (c % 2 == 0)
{
for (i = c / 2; i <= c; i++)
{
_putchar(*str);
str++;
}
}
else
{
n = ((c - 1) / 2);
for (i = n; i <= c; i++)
{
_putchar(*str);
str++;
}
}
_putchar('\n');
}

