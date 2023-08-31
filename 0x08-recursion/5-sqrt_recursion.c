#include "main.h"

/**
 * _sqrt_recursion - function to give
 * a square roo
 * @n: operand
 * @x: operand
 *Return:  1 (Success) and 0 (failure)
*/
int _sqrt(int n, int x);
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - function to give a root
 * a square roo
 * @n: operand
 * @x: operand
 * Return:  1 (Success) and 0 (failure)
*/

int _sqrt(int n, int x)
{
	if (n / x == x)
	{
		return (x);
	}
	else if (x * x < n)
	{
	return (_sqrt(n, x + 1));
	}
	else
	return (-1);
}
