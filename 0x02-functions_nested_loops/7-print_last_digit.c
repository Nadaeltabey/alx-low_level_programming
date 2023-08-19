#include"main.h"

/**
 * print_last_digit  - function to give the last
 * digit of a number
 *@n: operand
 *
 *Return:  1 (Success) and 0 (failure)
*/
int print_last_digit(int n)
{
int l;

if (n >= 0)
{
l = n % 10;
_putchar(l + '0');
return (l);
}
else
{
l = ((n % 10) * -1);
_putchar(l + '0');
return (l);
}
}
