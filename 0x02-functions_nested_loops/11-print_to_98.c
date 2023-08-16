#include"main.h"

/**
 * print_to_98  - function to give the 
 * number to 98
 *
 *Return:  1 (Success) and 0 (failure)
*/
void print_to_98(int n)
{
while (n <= 98)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
n++;
}
_putchar('\n');
}
