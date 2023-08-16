#include"main.h"

/**
 * print_sign  - function to tell if it is a
 * zero or negative or positive
 * @n: operand
 *
 *Return:  1 (Success) and 0 (failure)
*/
int print_sign(int n)

{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}
