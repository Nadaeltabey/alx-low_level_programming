#include "main.h"

/**
 * is_prime_number - function to give
 * a cat
 * @n: operand
 * @x: operand
 *Return:  1 (Success) and 0 (failure)
*/
int prime(int n, int x);
int is_prime_number(int n)
{
return (prime(n, 1));
}

/**
 * prime - function to give
 * a cat
 * @n: operand
 * @x: operand
 *Return:  1 (Success) and 0 (failure)
*/
int prime(int n, int x)
{
if (n <= 1)
{
	return (0);
}
if (n % x == 0 && x > 1)
	return (0);
if ((n / x > x))
	return (1);
return (prime(n, x + 1));
}
