#include"main.h"

/**
 * print_to_98  - function to give the 
 * number to 98
 *@n : operand
 *Return:  1 (Success) and 0 (failure)
*/
void print_to_98(int n)
{
int ff, f, l;

if (n <= 98)
{
while (n <= 98)
{
	if (n <= -10)
	{
	f = n / 10;
        l = n % 10;
        _putchar(f + '0');
        _putchar(l + '0');
	}
	else if (n <= 9 && n >=-9)
	{
	_putchar(n + '0');
	}
	else
	{
	f = n / 10;
	l = n % 10;
	_putchar(f + '0');
	_putchar(l + '0');
	}
if (n < 98)
{
_putchar(',');
_putchar(' ');
}
n++;
}
}
else
{
while (n >= 98)
{
if (n == 98 && n == 99)
{
f = n / 10;
l = n % 10;
_putchar(f + '0');
_putchar(l + '0');
}
else
{
ff = n / 100;
f = n / 10;
l = n % 10;
_putchar(ff + '0');
_putchar(f + '0');
_putchar(l + '0');
}
	if (n > 98)
	{
		_putchar(',');
		_putchar(' ');
	}
n--;
}
}
_putchar('\n');
}
