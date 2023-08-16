#include"main.h"

/**
 * print_last_digit  - function to give the last
 * digit of a number
 *
 *Return:  1 (Success) and 0 (failure)
*/
void print_to_98(int n)
{
if (n <= 98)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
n++;
}
_putchar('\n');
}
