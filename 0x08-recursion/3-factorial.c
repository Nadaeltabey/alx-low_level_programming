#include "main.h"

/**
 * factorial - function to give
 * a factorial
 * @n: operand
 *Return:  1 (Success) and 0 (failure)
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
