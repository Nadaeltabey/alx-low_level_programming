#include"main.h"

/**
 * print_last_digit  - function to give the last
 * digit of a number
 *
 *Return:  1 (Success) and 0 (failure)
*/
int print_last_digit(int n)
{
int l = n % 10;
_putchar(l);
return (l);
}
