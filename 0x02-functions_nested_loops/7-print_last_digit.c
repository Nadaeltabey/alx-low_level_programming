#include"main.h"

/**
 * print_last_digit  - function to give the last
 * digit of a number
 *
 *Return:  1 (Success) and 0 (failure)
*/
int print_last_digit(int n)
{
int l;
l = n % 10;
_putchar(l + '0');
return (l + '0');
}
