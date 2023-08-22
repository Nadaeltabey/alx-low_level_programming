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
int c = 0;

while (*s != '\0')
{
c++;
s++;
}
for (i = c - 1; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
